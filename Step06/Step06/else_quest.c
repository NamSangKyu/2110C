#include <stdio.h>
/*
    ���� �ΰ��� �Է� ���� ��
    �� ������ ���� ����� ������ ����� �����Բ� ���
    ��)
    5 7 �Է� ---> 2
    7 5 �Է� ---> 2
*/
int main(void) {
    int n1, n2, result;

    printf("���� 2�� �Է� : ");
    scanf_s("%d %d", &n1, &n2);

    result = n1 - n2;

    if (result < 0) {
        result = -result;
    }
    
    printf("%d\n", result);

    return 0;
}