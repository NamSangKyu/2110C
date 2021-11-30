#include <iostream>
/*
*   포인터를 이용하여 변수 두개를 받아서
*   두 변수의 내용을 서로 교환하는 함수
* 
*   정수형 변수 교환, 실수형 변수 교환 ---> 함수명 Swap 
*/ 
void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Swap(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}
int main(void) {
    int a = 10, b = 20;
    double c = 3.1415, d = 34.234;

    Swap(&a, &b);
    Swap(&c, &d);
    std::cout << a << " , " << b << std::endl;
    std::cout << c << " , " << d << std::endl;
    return 0;
}






