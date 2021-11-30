#include <iostream>
using namespace std;
int& add(int& n) {
    n++;
    return n;
}
int main(void) {
    int num = 10;
    //매개변수 참조자, 리턴 참조, 받는 변수도 참조자일 경우
    int& ref = add(num);

    cout << num << " " << ref << endl;
    cout << &num << " " << &ref << endl;

    //매개변수 참조자, 리턴 참조, 받는 변수는 일반 변수일 경우
    //일반 변수일때는 값을 참조자로 리턴 해도 변수가 새로 만들어지기 때문에 값만 복사받는다
    int var = add(num);

    cout << num << " " << var << endl;
    cout << &num << " " << &var << endl;

    return 0;
}