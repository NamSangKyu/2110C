#include <stdio.h>
int main(void) {
    int n = 10;
    /*
    *   ���մ��� ������
    *       +=  -=  *=  /=  %=
    */
    n += 10;//n = n + 10; // n�� 10�� ���� ����� �ٽ� n�� ����
    printf("n : %d\n", n);
    n -= 10;//n = n - 10;
    printf("n : %d\n", n);
    n *= 3;//n = n * 3;
    printf("n : %d\n", n);

    return 0;
}