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
    return 0;
}