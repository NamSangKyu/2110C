#include <stdio.h>
/*
    ������ �迭 ���̰� 10��¥�� ���� ��
    �迭�� ������ ���� �Է¹޴� �ݺ����� �ۼ�

    1. �迭�� �Էµ� ���ڵ��� ������ ���
    2. �迭�� �Էµ� ���ڵ� �� ���� ū ���ڸ� ���
    3. �迭�� �Էµ� ���ڵ� �� ���� ���� ���ڸ� ���
*/
int main(void) {
    int arr[10];
    int i, total, max;
    const int len = sizeof(arr) / sizeof(int);
    for (i = 0; i < len; i++) {
        printf("%d ��° ���� �Է� : ", i + 1);
        scanf_s("%d", &arr[i]);
    }
    //----------------------------------
    total = 0;
    max = arr[0];
    for (i = 0; i < len; i++) {
        total += arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    printf("���� : %d\n", total);
    printf("�ִ밪 : %d\n", max);
    return 0;
}



