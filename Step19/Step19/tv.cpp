#include <iostream>
using namespace std;
/*
    TV
        ä�� - int - 1~777
        ���� - int - 0~30
        ���� - bool - true ���� ����, false ���� ����

        ä��Up
        ä��Down
        ����Up
        ����Down
        ����OnOff
*/
struct TV {
    int ch;
    int vol;
    bool power;

    void chUp() {
        ch++;
        if (ch > 777)
            ch = 1;
        cout << "���� ä�� : " << ch << endl;
    }
    void chDown() {
        ch--;
        if (ch < 1)
            ch = 777;
        cout << "���� ä�� : " << ch << endl;
    }
    void volUp() {
        if (vol < 30)
            vol++;
        cout << "���� ���� : " << vol << endl;
    }
    void volDown() {
        if (vol > 0)
            vol--;
        cout << "���� ���� : " << vol << endl;
    }
    void powerOnOff() {
        power = !power;
        if (power)
            cout << "TV ���� On" << endl;
        else
            cout << "TV ���� Off" << endl;
    }

};
int main(void) {


    return 0;
}