#include <stdio.h>
/*
    ������ �迭 ���̰� 50¥���� ����
    ���ڿ��� �Է� �޾Ƽ�
    �ش� ���� ������ ���

    �Է��� ���ڿ��� ����� �迭�� ���� �� ���
*/
int main(void) {
    char str[50];
    int idx = 0;
    printf("���ڿ� �Է� : ");
    scanf_s("%s", str, sizeof(str));

    while (str[idx] != '\0')//�� ���� : ���� 0, '\0'
        idx++;

    printf("���ڿ� ���� : %d\n", idx);
    return 0;
}