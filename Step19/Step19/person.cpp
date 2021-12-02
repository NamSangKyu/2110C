#include <iostream>
#include <cstring>
using namespace std;
/*
    ����������
        private : Ŭ���� ���ο����� ������ ����, �ܺηκ��� ������ ���� 
        protected : ��ӹ��� Ŭ�������� ������ ����
        public : �ܺηκ��� ������ ���, �ش� �Լ��� ������ ����
*/
class Person {
private:
    //��� ����
    char name[30];
    int age;
public:
    //������ : Ŭ������ �̿��Ͽ� ���� ����� ���ϸ��� �� �ѹ� ����Ǵ� �Լ�
    //        Ŭ������ ������ �Ǿ����� ���� ���� �ؾߵǴ� �ϵ��� ó���ϴ� �Լ�
    // �����ڴ� Ŭ���� ���� �Լ���, ����Ÿ���� ���� �Լ�
    Person() {
        cout << "Person ������" << endl;
    }
    Person(const char* n, int a) {
        cout << "Person(const char *, int) ������ " << endl;
        strcpy_s(name, sizeof(name), n);
        if (a >= 0)
            age = a;
        else
            age = 0;
    }
    //��� �Լ�
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
    //p.age = -20; age�� private ������ �ֱ� ������ ������ �� ����.
    p.PrintInfo();

    Person a("��ö��", 22);
    a.PrintInfo();

    return 0;
}