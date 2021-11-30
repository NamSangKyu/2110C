#include <iostream>
/*
* 함수 중복 정의 (Overloaing)
*   함수명을 동일하게 사용이 가능
*       1. 매개변수 개수가 다르면 됨
*       2. 매개변수의 변수 타입이 다르면 됨
*   위의 조건 중 둘 중에 하나만 만족하면 됨
*/ 
int sum(int a, int b) {
    return a + b;
}
double sum(double a, double b) {
    return a + b;
}
int main(void) {
    std::cout << sum(10, 20) << std::endl;
    std::cout << sum(3.14235, 12.345) << std::endl;
    return 0;
}