#include <iostream>
#include <cstring>

using namespace std;
/*
    사원 클래스
        멤버변수 : 사번 - char *, 이름 - char * , 직급 - int, 연봉 - int
        멤버함수 
            멤버변수 전부 초기화하는 생성자
            사원정보 출력하는 함수
*/ 
enum {
 // 사원    주임    대리       과창      차장                     부장
    CLERK, SENIOR, ASSISTANT, MANAGER, DEPUTY_GENEARL_MANAGER, GENEARL_MANAGER
};
class Employee {
private:
    char* eno;
    char* name;
    int position;
    int salary;
public:
    Employee(const char* e, const char* n, int p, int s) : position(p), salary(s) {
        eno = new char[strlen(e)+1];
        strcpy_s(eno, strlen(e) + 1, e);
        name = new char[strlen(n) + 1];
        strcpy_s(name, strlen(n) + 1, n);
    }
    //소멸자(Deconstructor)
    ~Employee() {
        delete[] eno;
        delete[] name;
    }


};

int main(void) {


    return 0;
}