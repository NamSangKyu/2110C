/*
*   �⺻ �ڵ� �ۼ�
*   ������ ���� �ΰ� ����
*   ���Ͻô� ������ �ʱ�ȭ* 
*/
#include <stdio.h>

int main(void) {
    int n1 = 10, n2 = 3, result = 0;
    /*
    *   ��Ģ����
    *   +   -   *   /(��)   %(������)
    */
    result = n1 + n2;//n1+n2�� ������� result�� ����
    printf("%d\n", result);
    printf("%d\n", n1 - n2);
    printf("%d\n", n1 * n2);
    printf("%d\n", n1 / n2);
    printf("%d\n", n1 % n2);
    return 0;
}