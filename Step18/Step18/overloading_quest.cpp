#include <iostream>
/*
*   �����͸� �̿��Ͽ� ���� �ΰ��� �޾Ƽ�
*   �� ������ ������ ���� ��ȯ�ϴ� �Լ�
* 
*   ������ ���� ��ȯ, �Ǽ��� ���� ��ȯ ---> �Լ��� Swap 
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






