#include <iostream>
#include <cstring>
using namespace std;
/*
    접근제어자
        private : 클래스 내부에서만 접근이 가능, 외부로부터 접근을 차단 
        protected : 상속받은 클래스까지 접근이 가능
        public : 외부로부터 접근을 허용, 해당 함수나 변수를 공개
*/
class Person {
private:
    //멤버 변수
    char name[30];
    int age;
public:
    //멤버 함수
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
    //p.age = -20; age가 private 영역에 있기 때문에 접근할 수 없다.
    p.PrintInfo();
    return 0;
}