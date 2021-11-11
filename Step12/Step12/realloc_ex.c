/*
    double형으로 길이가 10인 배열을 동적할당으로 생성
    생성후 임의값으로 초기화, 전체 출력
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double* arr = (double*)malloc(sizeof(double) * 10);
    int i;

    printf("%p\n", arr);
    for (i = 0; i < 10; i++) 
        arr[i] = (i + 1) * 1.1;
    
    for (i = 0; i < 10; i++)
        printf("%g ", arr[i]);
    printf("\n");

    arr = (double*)realloc(arr, sizeof(double) * 25);
    printf("%p\n", arr);
    for (i = 0; i < 10; i++)
        printf("%g ", arr[i]);
    printf("\n");
    return 0;
}

