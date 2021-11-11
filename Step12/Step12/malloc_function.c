#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
    int* ptr = (int*)malloc(sizeof(int) * size);
    return ptr;
}

int main(void) {
    int* arr;
    int size, i;

    printf("원하는 배열 크기를 입력 : ");
    scanf_s("%d", &size);

    arr = createArray(size);
    for (i = 0; i < size; i++)
        arr[i] = i + 1;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}