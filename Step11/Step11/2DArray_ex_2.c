#include <stdio.h>

int main(void) {
    int arr1[3][5] = {
                      //0 1 2 3 4
                       {1,2,3,4,5},//0
                       {6,7,8,9,10},//1
                       {11,12,13,14,15}//2
                    };
    int arr2[3][5] = {
                        {1,2,3},
                        {4},
                        {5,6,7,8}
                     };
    int arr3[3][5] = { 1,2,3,4,5,6,7,8 };
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) 
            printf("%2d ", arr1[i][j]);
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) 
            printf("%2d ", arr2[i][j]);
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) 
            printf("%2d ", arr3[i][j]);
        printf("\n");
    }


    return 0;
}