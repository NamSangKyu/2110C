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
    //���� ������ - �Ű������� �ڽŰ� ������ Ÿ���� ���� �����ڷ� ����
    Employee(const Employee& e) {
        cout << "���� ������ ȣ��" << endl;
        eno = new char[strlen(e.eno) + 1];
        strcpy_s(eno, strlen(e.eno) + 1, e.eno);
        name = new char[strlen(e.name) + 1];
        strcpy_s(name, strlen(e.name) + 1, e.name);
        position = e.position;
        salary = e.salary;
    }

    //�Ҹ���(Deconstructor)
    ~Employee() {
        delete[] eno;
        delete[] name;
        cout << "�Ҹ��� ȣ��" << endl;
    }

    const char* GetPositionName() {
        switch (position) {
        case CLERK:
            return "���";
        case SENIOR:
            return "����";
        case ASSISTANT:
            return "�븮";
        case MANAGER:
            return "����";
        case DEPUTY_GENEARL_MANAGER:
            return "����";
        case GENEARL_MANAGER:
            return "����";
        }
    }
    void PrintEmployeeInfo() {
        cout << "��� : " << eno << endl;
        cout << "�̸� : " << name << endl;
        cout << "���� : " << GetPositionName() << endl;
        cout << "���� : " << salary << endl;
    }
};

int main(void) {
    Employee emp("A0001","ȫ�浿",CLERK,2000);
    emp.PrintEmployeeInfo();

    Employee e = emp;
    e.PrintEmployeeInfo();
    return 0;
}