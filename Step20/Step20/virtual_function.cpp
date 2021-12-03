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
int main(void) {

    return 0;
}