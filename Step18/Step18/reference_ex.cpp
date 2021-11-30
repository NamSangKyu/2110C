#include <iostream>
using namespace std;
/*
*   참조자 : 변수를 선언하면 메모리 공간에 변수명이 하나 붙어있음,
*            그 공간에 다른 변수명을 더 붙여서 사용이 가능하게 하는 것이 참조자(공동 명의)
*/ 
int main(void) {
    int num = 10;

    int& ref = num;
    int& var = ref;

    cout << num << " " << ref << " " << var << endl;
    num++;
    cout << num << " " << ref << " " << var << endl;
    cout << &num << " " << &ref << " " << &var << endl;


    return 0;
}