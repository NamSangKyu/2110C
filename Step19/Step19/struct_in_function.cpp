#include <iostream>
using namespace std;
struct Person {
    char name[20];
    int age;
    void PrintPerson() {
        cout << name << " " << age << endl;
    }
};
int main(void) {
    Person p1 = {"ȫ�浿", 20};
    p1.PrintPerson();

    Person p2 = { "��ö��",33 };
    p2.PrintPerson();
    return 0;
}