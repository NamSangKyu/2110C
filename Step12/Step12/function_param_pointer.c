#include <stdio.h>
/*
    ���Լ��� �迭, �迭 ũ��, ���Ұ��� �޾Ƽ�
    �޾ƿ� �迭�� ������� ���� �޾ƿ� �������� ���ؼ� ����

    �迭, �迭ũ�� �޾Ƽ� �迭�� ��� ������ ����ϴ� �Լ�
*/
void ArrToAdd(int* arr, int len, int add) {
    int* end = arr + len;
    while (arr != end) {
        *arr += add;
        arr++;
    }
}
void PrintArray(int* arr, int len) {
    int* end = arr + len;
    while (arr != end) {
        printf("%d ", *arr);
        arr++;
    }
}
int main(void) {
    int arr[5] = { 1,2,3,4,5 };

    ArrToAdd(arr, sizeof(arr) / sizeof(int), 3);
    PrintArray(arr, sizeof(arr) / sizeof(int));

    return 0;
}