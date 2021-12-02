#include <iostream>
#include <cstring>
using namespace std;
class Car {
private:
    char* model;
    int speed;
    const int MAX_SPEED;
public:
    //initailizer : 상수나 참조자, 일변 변수를 초기화 함, 객체 생성전에 초기화 처리
    Car(const char* m, int s, int mx) : MAX_SPEED(mx),speed(s){
        model = new char[strlen(m) + 1];
        strcpy_s(model, strlen(m) + 1, m);
    }

    void Acc() {//Acc : 액셀레이터 기능, 실행할때마다 속도 10씩 증가 최대속도 넘어가지 못함
        speed += 10;
        if (speed > MAX_SPEED)
            speed = MAX_SPEED;
        PrintInfo();
    }
    void Break() {//Break : 브레이크 기능 실행할떄마다 속도 7씩 감소 최저 속도 0 미만으로 넘어가지 못함
        speed -= 7;
        if (speed < 0)
            speed = 0;
        PrintInfo();
    }
    void PrintInfo() {//차량정보 출력
        cout << model << " " << speed << "/" << MAX_SPEED << endl;
    }
};
int main(void) {
    Car k3("k3", 30, 160);
    Car k5("k5", 40, 180);
    k3.PrintInfo();
    k5.PrintInfo();

    return 0;
}
