#include <stdio.h>
/*
    ���ù�(switch)
       ���� �������� ������ �ڵ带 �ۼ�

    ������ ���� ��Ȯ�ϰ� ������ ������ ���(���� ���� ���)
*/
int main(void) {
    int n;
    printf("���� �Է� : ");
    scanf_s("%d", &n);

    switch (n) {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    default:
        printf("No Value Number");
    }


    return 0;
}