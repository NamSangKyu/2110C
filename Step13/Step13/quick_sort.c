#include <stdio.h>
//���� ��ȯ�ϴ� �Լ�
void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
//�迭 ����ϴ� �Լ�
void PrintArray(int* arr, int s, int e) {
    while (s <= e) {
        printf("%d ", arr[s++]);
    }
    printf("\n");
}
void QuickSort(int* arr, int left, int right) {
    int pl = left;
    int pr = right;
    int x = arr[(pl+pr)/2];
    printf("������ : ");
    PrintArray(arr, left, right);
    do {
        while (arr[pl] < x) pl++;
        while (arr[pr] > x) pr--;

        if (pl <= pr) {
            Swap(&arr[pl], &arr[pr]);
            pl++;
            pr--;
        }
    } while (pl <= pr);
    printf("���� �� : ");
    PrintArray(arr, left, right);
    if (left < pr) QuickSort(arr, left, pr);
    if (right > pl) QuickSort(arr, pl, right);

}
int main(void) {
    int arr[] = { 5,8,4,2,6,1,3,9,7 };
    QuickSort(arr, 0, 7);
    PrintArray(arr, 0, 7);
    return 0;
}