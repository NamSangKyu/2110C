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