#include <stdio.h>
/*
    ���� �ϳ� �Է�
    90~100 ���� ��� A
    80~89  ���� ��� B
    70~79  ���� ��� C
    60~69  ���� ��� D
     0~59  ���� ��� F
*/

int main(void) {
    int score;

    printf("���� �Է� : ");
    scanf_s("%d", &score);

    switch (score / 10) {
    case 10:
    case 9:
        printf("���� ��� : A");
        break;
    case 8:
        printf("���� ��� : B");
        break;
    case 7:
        printf("���� ��� : C");
        break;
    case 6:
        printf("���� ��� : D");
        break;
    default:
        printf("���� ��� : F");
    }
    return 0;
}