#include <stdio.h>

int main(void) {
    int n;

    printf("���� �Է� : ");
    scanf_s("%d", &n);

    if (n % 2 == 1) {
        printf("�Է��Ͻ� ���ڴ� Ȧ�� �Դϴ�.");
    }
    else if (n == 0) {
        printf("�Է��Ͻ� ���ڴ� 0 �Դϴ�.");
    }
    else {
        printf("�Է��Ͻ� ���ڴ� ¦�� �Դϴ�.");
    }
    return 0;
}