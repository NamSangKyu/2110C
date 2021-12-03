#include <iostream>
using namespace std;
/*
    OnOff Ŭ����
        ����Լ�
            PowerOn : ������ �Ѵ� �Լ�  --->  Power On
            PowerOff : ������ ���� �Լ� ---> Power Off

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
    TV Ŭ���� : OnOff
        ��� ����:
            power - bool
        ��� �Լ�:
            �θ� Ŭ������ �� �Լ��� ���� �������̵�
            PowerOn : power�� true�� �ٲٰ� TV ���� On
            PowerOff : power�� false�� �ٲٰ� TV ���� Off
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
        cout << "TV ���� On" << endl;
    }
    void PowerOff() {
        power = false;
        cout << "TV ���� Off" << endl;
    }
};
/*
    Boiler Ŭ���� : OnOff
        ������� :
            power - bool
        ����Լ� : �θ� Ŭ������ �� �Լ��� ���� �������̵�
            PowerOn : power�� true �ٲٰ� Boiler ���� On
            PowerOff : power�� false �ٲٰ� Boiler ���� Off
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
        cout << "Bolier ���� On" << endl;
    }
    void PowerOff() {
        power = false;
        cout << "Bolier ���� Off" << endl;
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
    //onoff = &boiler;//�ڽ�Ŭ������ �θ�Ŭ���� ����ȯ Up Casting
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