#include <stdio.h>
/*
    ������ �迭 3�� 9��¥�� 2���� �迭�� ���� ��
    �ڵ����� 2~4�ܱ��� ������ ���� ���� �� ���

    2  4  6  8 10 12 14 16 18
    3  6  9 12 15 18 21 24 27
    4  8 12 16 20 24 28 32 36
*/
int main(void) {
    int arr[3][9];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 9; j++)
            arr[i][j] = (i + 2) * (j + 1);
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 9; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}