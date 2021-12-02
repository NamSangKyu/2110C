#include <iostream>
#include <cstring>
using namespace std;
struct Person {
    char name[30];
    int age;

    void Init(const char* n, int a) {
        //n�� name�� ����
        strcpy_s(name, sizeof(name), n);
        //a�� age�� ����
        if(a >= 0)
            age = a;
    }
    void PrintInfo() {
        //Person ���� ���
        cout << name << "\t" << age << endl;
    }
};
int main(void) {
    Person p;
    p.Init("ȫ�浿", 20);
    p.age = -20;
    p.PrintInfo();
    return 0;
}