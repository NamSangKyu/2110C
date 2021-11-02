#include <stdio.h>

int main(void) {

    int arr1[5];
    double arr2[7];
    short arr3[8];

    //arr1ÀÇ size
    printf("arr1 size : %d\n", sizeof(arr1)); //20
    //arr2ÀÇ size
    printf("arr2 size : %d\n", sizeof(arr2));//56
    //arr3ÀÇ size
    printf("arr3 size : %d\n", sizeof(arr3));//16


    return 0;
}