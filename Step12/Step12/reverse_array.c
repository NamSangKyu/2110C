#include <stdio.h>

    /*
        �迭 arr�� ������ �ݴ�� �����ϴ� �ڵ� �ۼ�
        ��, �迭 �ε����� Ȱ������ �ʰ�,
        ������ �ΰ��� �̿��ؼ� ������ ����
    */
int main(void) {

    int arr[7] = { 1,2,3,4,5,6,7 };
    int* start = arr;
    int* end = &arr[6];

    while (start <= end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    start = arr;
    end = &arr[6];
    while (start <= end) {
        printf("%d ", *start);
        start++;
    }


    return 0;
}