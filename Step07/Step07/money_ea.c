#include <stdio.h>
/*
    �ݾ�(������)�� �Է¹޾Ƽ�
    �� ȭ�� ������ ���

    �ݾ� : 79360
    50000�� : 1
    10000�� : 2
    5000�� : 1
    1000�� : 4
    500�� : 0
    100�� : 3
    50�� : 1
    10�� 1
*/
int main(void) {
    int money, ea = 50000, sw = 0;

    printf("�ݾ��� �Է� : ");
    scanf_s("%d", &money);

    while (ea >= 10) {
        printf("%d �� : %d\n", ea, money / ea);
        money %= ea;
        if (sw)
            ea /= 2;
        else
            ea /= 5;
        sw = !sw;
    }
    return 0;
}