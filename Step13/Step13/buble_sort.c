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
    return 0;
}