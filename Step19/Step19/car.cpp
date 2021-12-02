#include <iostream>
#include <cstring>
using namespace std;
class Car {
private:
    char* model;
    int speed;
    const int MAX_SPEED;
public:
    //initailizer : ����� ������, �Ϻ� ������ �ʱ�ȭ ��, ��ü �������� �ʱ�ȭ ó��
    Car(const char* m, int s, int mx) : MAX_SPEED(mx),speed(s){
        model = new char[strlen(m) + 1];
        strcpy_s(model, strlen(m) + 1, m);
    }

    void Acc() {//Acc : �׼������� ���, �����Ҷ����� �ӵ� 10�� ���� �ִ�ӵ� �Ѿ�� ����
        speed += 10;
        if (speed > MAX_SPEED)
            speed = MAX_SPEED;
        PrintInfo();
    }
    void Break() {//Break : �극��ũ ��� �����ҋ����� �ӵ� 7�� ���� ���� �ӵ� 0 �̸����� �Ѿ�� ����
        speed -= 7;
        if (speed < 0)
            speed = 0;
        PrintInfo();
    }
    void PrintInfo() {//�������� ���
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
