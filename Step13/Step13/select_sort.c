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
    //선택 정렬 구현
    int arr[] = { 8,4,6,9,7,1 };
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 6; j++) {
            if (arr[i] > arr[j])
                Swap(&arr[i], &arr[j]);
        }
        printf("%d pass : ", i + 1);
        PrintArray(arr, 6);
    }

    return 0;
}