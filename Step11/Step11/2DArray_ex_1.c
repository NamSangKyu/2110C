#include <stdio.h>

int main(void) {
    //3행 4열짜리 2차원 배열
    int arr[3][4];
    int n = 1, i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            arr[i][j] = n;
            n++;
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}