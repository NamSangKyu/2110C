#include <stdio.h>
/*
        5�� 5�� �迭�� �����͸� �Ʒ��� ���� �ڵ����� ä�� �� ���

         1  2  3  4  5
        10  9  8  7  6
        11 12 13 14 15
        20 19 18 17 16
        21 22 23 24 25
*/
int main(void) {
    int arr[5][5];
    int i, j=0, n = 1, sw=1;

    for (i = 0; i < 5; i++) {
 
        while (!(j == -1 || j == 5)) {
            arr[i][j] = n++;
            j += sw;
        }
        if (sw == 1)
            sw = -1;
        else
            sw = 1;
        j += sw;
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}