#include <iostream>
/*
* �Լ� �ߺ� ���� (Overloaing)
*   �Լ����� �����ϰ� ����� ����
*       1. �Ű����� ������ �ٸ��� ��
*       2. �Ű������� ���� Ÿ���� �ٸ��� ��
*   ���� ���� �� �� �߿� �ϳ��� �����ϸ� ��
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