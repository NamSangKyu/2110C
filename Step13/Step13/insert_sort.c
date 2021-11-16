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
    int arr[6];
    int i, j;

    for (i = 0; i < 6; i++) {
        printf("숫자 입력 : ");
        scanf_s("%d", &arr[i]);
        for (j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1])
                Swap(&arr[j], &arr[j - 1]);
        }
        printf("%d pass : ", i + 1);
        PrintArray(arr, i + 1);
    }
    return 0;
}