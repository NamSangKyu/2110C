#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
    int* ptr = (int*)malloc(sizeof(int) * size);
    return ptr;
}

int main(void) {
    int* arr;
    int size, i;

    printf("���ϴ� �迭 ũ�⸦ �Է� : ");
    scanf_s("%d", &size);

    arr = createArray(size);
    for (i = 0; i < size; i++)
        arr[i] = i + 1;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}