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
    void PowerOn() {
        cout << "Power On" << endl;
    }
    void PowerOff() {
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
int main(void) {

    return 0;
}