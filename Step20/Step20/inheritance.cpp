#include <iostream>
using namespace std;
/*
    ���(Inheritance)
        �θ� Ŭ������ �ڽ� Ŭ�������� ������ ������ �ִ� ������ �Լ��� ������
        �ڽ� Ŭ������ �θ� �� ������ �Լ��� �ٷ� ����� ����
*/
class Animal {
protected://Animal�� ��ӹ��� Ŭ�������� ������ ����
    int age;
public:
    //��Ӱ��迡�� ������ ������ �θ� �����ں��� ����
    Animal(int a) {
        cout << "Animal Constructor" << endl;
        age = a;
    }
    void eat() {
        cout << "������ ���̸� �Խ��ϴ�" << endl;
    }
};
//��� ���� ---> class �ڽ�Ŭ������ : public �θ� Ŭ������
class Person : public Animal {
public:
    //�θ� �����ڿ��� �����Ͱ� �ʿ��� ��� �ڽĻ����ڰ� �޾Ƽ� �̴ϼȶ������� �θ� �����ڸ� ȣ��
    Person(int a) : Animal(a) {
        cout << "Person Constructor" << endl;
    }
};
int main(void) {
    Person p(20);
    p.eat();
    return 0;
}