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
    int i;
    printf("���ڿ� �Է� : ");
    scanf_s("%s", str, sizeof(str));

    while (str[idx] != '\0')//�� ���� : ���� 0, '\0'
        idx++;

    printf("���ڿ� ���� : %d\n", idx);

    for (i = 0; i < idx / 2; i++) {
        char temp = str[i];
        str[i] = str[idx - 1 - i];
        str[idx - 1 - i] = temp;
    }

    printf("������ ��� : %s\n", str);

    return 0;
}