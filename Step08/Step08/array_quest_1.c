#include <stdio.h>
/*
    ������ �迭 ���̰� 10��¥�� ���� ��
    �迭�� ������ ���� �Է¹޴� �ݺ����� �ۼ�

    1. �迭�� �Էµ� ���ڵ��� ������ ���
*/
int main(void) {
    int arr[10];
    int i, total;
    const int len = sizeof(arr) / sizeof(int);
    for (i = 0; i < len; i++) {
        printf("%d ��° ���� �Է� : ", i + 1);
        scanf_s("%d", &arr[i]);
    }
    //----------------------------------
    total = 0;
    for (i = 0; i < len; i++) {
        total += arr[i];
    }
    printf("���� : %d\n", total);
    return 0;
}



