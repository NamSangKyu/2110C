#include <stdio.h>
/*
    ������ �迭 ���̰� 10��¥�� ���� ��
    �迭�� ������ ���� �Է¹޴� �ݺ����� �ۼ�


*/
int main(void) {
    int arr[10];
    int i;
    int len = sizeof(arr) / sizeof(int);
    for (i = 0; i < len; i++) {
        printf("%d ��° ���� �Է� : ", i + 1);
        scanf_s("%d", &arr[i]);
    }


    return 0;
}