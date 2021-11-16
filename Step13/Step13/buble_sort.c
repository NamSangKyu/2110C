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
    //���� ���� ����
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