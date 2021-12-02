#include <iostream>
using namespace std;
/*
    TV
        채널 - int - 1~777
        음량 - int - 0~30
        전원 - bool - true 켜진 상태, false 꺼진 상태

        채널Up
        채널Down
        음량Up
        음량Down
        전원OnOff
*/
struct TV {
    int ch;
    int vol;
    bool power;

    void chUp() {
        ch++;
        if (ch > 777)
            ch = 1;
        cout << "현재 채널 : " << ch << endl;
    }
    void chDown() {
        ch--;
        if (ch < 1)
            ch = 777;
        cout << "현재 채널 : " << ch << endl;
    }
    void volUp() {
        if (vol < 30)
            vol++;
        cout << "현재 음량 : " << vol << endl;
    }
    void volDown() {
        if (vol > 0)
            vol--;
        cout << "현재 음량 : " << vol << endl;
    }
    void powerOnOff() {
        power = !power;
        if (power)
            cout << "TV 전원 On" << endl;
        else
            cout << "TV 전원 Off" << endl;
    }

};
int main(void) {
    TV tv = { 21,10,false };
    tv.powerOnOff();
    tv.powerOnOff();

    for (int i = 0; i < 30; i++)
        tv.chDown();
    for (int i = 0; i < 30; i++)
        tv.chUp();
    for (int i = 0; i < 30; i++)
        tv.volUp();
    for (int i = 0; i < 40; i++)
        tv.volDown();
    return 0;
}