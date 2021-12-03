#include <iostream>
using namespace std;
/*
    상속(Inheritance)
        부모 클래스가 자식 클래스에게 본인이 가지고 있는 변수와 함수를 물려줌
        자식 클래스는 부모가 준 변수와 함수를 바로 사용이 가능
*/
class Animal {
protected://Animal을 상속받은 클래스까지 접근이 가능
    int age;
public:
    //상속관계에서 생성은 무조건 부모 생성자부터 실행
    Animal(int a) {
        cout << "Animal Constructor" << endl;
        age = a;
    }
    void eat() {
        cout << "동물이 먹이를 먹습니다" << endl;
    }
};
//상속 문법 ---> class 자식클래스명 : public 부모 클래스명
class Person : public Animal {
public:
    //부모 생성자에서 데이터가 필요한 경우 자식생성자가 받아서 이니셜라이져로 부모 생성자를 호출
    Person(int a) : Animal(a) {
        cout << "Person Constructor" << endl;
    }
};
int main(void) {
    Person p(20);
    p.eat();
    return 0;
}