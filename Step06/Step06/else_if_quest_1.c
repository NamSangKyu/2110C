#include <stdio.h>
/*
    ���̸� �Է� �޾Ƽ�
    0~7��   ����    - ����� 1000�� ���
    8~19��  û�ҳ�  - ����� 1500�� ���
    20~59�� ����    - ����� 2000�� ���
    60�� �̻�       - ����� ����
*/
int main(void) {
    int age;

    printf("���� �Է� : ");
    scanf_s("%d", &age);

    if (age >= 60) {
        printf("����� ����");
    }
    else if (age >= 20) {
        printf("����� 2000��");
    }
    else if (age >= 8) {
        printf("����� 1500��");
    }
    else {
        printf("����� 1000��");
    }
    return 0;
}