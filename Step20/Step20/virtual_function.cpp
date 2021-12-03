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
    void PowerOn() {
        cout << "Power On" << endl;
    }
    void PowerOff() {
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
int main(void) {

    return 0;
}