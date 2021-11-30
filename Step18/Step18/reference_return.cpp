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

    int var = add(num);

    cout << num << " " << var << endl;
    cout << &num << " " << &var << endl;

    return 0;
}