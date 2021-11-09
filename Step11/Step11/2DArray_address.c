#include <stdio.h>

int main(void) {
    int arr[3][5];
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) 
            printf("arr[%d][%d] = %d\n", i, j, &arr[i][j]);
    }

    return 0;
}