#include <stdio.h>
/*
    이함수는 배열, 배열 크기, 더할값을 받아서
    받아온 배열의 모든요소의 값에 받아온 증가값을 더해서 증가

    배열, 배열크기 받아서 배열의 모든 내용을 출력하는 함수
*/
void ArrToAdd(int* arr, int len, int add) {
    int* end = arr + len;
    while (arr != end) {
        *arr += add;
        arr++;
    }
}
void PrintArray(int* arr, int len) {
    int* end = arr + len;
    while (arr != end) {
        printf("%d ", *arr);
        arr++;
    }
}
int main(void) {
    int arr[5] = { 1,2,3,4,5 };

    ArrToAdd(arr, sizeof(arr) / sizeof(int), 3);
    PrintArray(arr, sizeof(arr) / sizeof(int));

    return 0;
}