#include <stdio.h>
//배열 출력하는 함수
void PrintArray(int* arr, int len) {
    int i = 0;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//값을 교환하는 함수
void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void) {
    //버블 정렬 구현
    int arr[] = { 8,4,6,9,7,1 };
    int pass, j;

    for (pass = 0; pass < 5; pass++) {
        for (j = 0; j < 5; j++) {
            if (arr[j] > arr[j + 1])
                Swap(&arr[j], &arr[j + 1]);
        }
        printf("%d pass : ", pass + 1);
        PrintArray(arr, 6);

    }

    return 0;
}