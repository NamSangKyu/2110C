#include <iostream>
using namespace std;
/*
    OnOff 클래스
        멤버함수
            PowerOn : 전원을 켜는 함수  --->  Power On
            PowerOff : 전원을 끄는 함수 ---> Power Off

*/
class OnOff {
public:
    virtual void PowerOn() {
        cout << "Power On" << endl;
    }
    virtual void PowerOff() {
        cout << "Power Off" << endl;
    }
};
/*
    TV 클래스 : OnOff
        멤버 변수:
            power - bool
        멤버 함수:
            부모 클래스가 준 함수를 전부 오버라이딩
            PowerOn : power를 true로 바꾸고 TV 전원 On
            PowerOff : power를 false로 바꾸고 TV 전원 Off
*/
class TV : public OnOff {
private:
    bool power;
public:
    TV() {
        power = false;
    }
    void PowerOn() {
        power = true;
        cout << "TV 전원 On" << endl;
    }
    void PowerOff() {
        power = false;
        cout << "TV 전원 Off" << endl;
    }
};
/*
    Boiler 클래스 : OnOff
        멤버변수 :
            power - bool
        멤버함수 : 부모 클래스가 준 함수를 전부 오버라이딩
            PowerOn : power를 true 바꾸고 Boiler 전원 On
            PowerOff : power를 false 바꾸고 Boiler 전원 Off
*/
class Boiler : public OnOff {
private:
    bool power;
public:
    Boiler() {
        power = false;
    }
    void PowerOn() {
        power = true;
        cout << "Bolier 전원 On" << endl;
    }
    void PowerOff() {
        power = false;
        cout << "Bolier 전원 Off" << endl;
    }
};
void powerOn(OnOff& onoff) {
    onoff.PowerOn();
}


int main(void) {
    TV tv;
    Boiler boiler;
    OnOff* onoff;
    onoff = &tv;
    onoff->PowerOn();
    onoff->PowerOff();
    //onoff = &boiler;//자식클래스를 부모클래스 형변환 Up Casting
    //onoff->PowerOn();
    //onoff->PowerOff();
    Boiler* ptr = (Boiler*)onoff; //Down Casting
    ptr->PowerOn();
    ptr->PowerOff();
    cout << "------------" << endl;
    powerOn(tv);
    powerOn(boiler);
    return 0;
}