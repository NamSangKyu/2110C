#include <stdio.h>
/*
    1���� 100���� ���ڵ� �� 3�� 5�� ����� ���
    �� 3�� 5�� ������� �ѹ��� ���
    �ݺ��� if���� ���
*/
int main(void) {
    int i;

    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}