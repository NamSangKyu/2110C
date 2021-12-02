#include <iostream>
#include <cstring>
using namespace std;
struct Person {
    char name[30];
    int age;

    void Init(const char* n, int a) {
        //n은 name에 복사
        strcpy_s(name, sizeof(name), n);
        //a는 age에 저장
        if(a >= 0)
            age = a;
    }
    void PrintInfo() {
        //Person 정보 출력
        cout << name << "\t" << age << endl;
    }
};
int main(void) {
    Person p;
    p.Init("홍길동", 20);
    p.age = -20;
    p.PrintInfo();
    return 0;
}