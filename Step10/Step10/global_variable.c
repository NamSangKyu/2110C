#include <stdio.h>
/*
    �������� - ������ ���� ���
        ��� �Լ����� ������ ������ ���
        ���������� �Լ� �ۿ��ٰ� ����
*/
int count = 0;
int sum(int a, int b) {
    count++;
    return a + b;
}
int main(void) {
    int count = -1;//���������� ���������� �̸��� ������ ���������� ���� X
    printf("sum : %d\n", sum(2, 45));
    printf("sum : %d\n", sum(6, 5));
    printf("sum : %d\n", sum(1, 4));
    printf("count : %d\n", count);
    return 0;
}