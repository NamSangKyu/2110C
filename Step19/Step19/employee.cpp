#include <iostream>
#include <cstring>

using namespace std;
/*
    ��� Ŭ����
        ������� : ��� - char *, �̸� - char * , ���� - int, ���� - int
        ����Լ� 
            ������� ���� �ʱ�ȭ�ϴ� ������
            ������� ����ϴ� �Լ�
*/ 
enum {
 // ���    ����    �븮       ��â      ����                     ����
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
    //�Ҹ���(Deconstructor)
    ~Employee() {
        delete[] eno;
        delete[] name;
    }


};

int main(void) {


    return 0;
}