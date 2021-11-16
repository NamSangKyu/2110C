#include <stdio.h>
//�迭 ����ϴ� �Լ�
void PrintArray(int* arr, int len) {
    int i = 0;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//���� ��ȯ�ϴ� �Լ�
void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void) {
    int arr[6];
    int i, j;

    for (i = 0; i < 6; i++) {
        printf("���� �Է� : ");
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