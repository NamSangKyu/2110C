#include <stdio.h>

    /*
        배열 arr의 내용을 반대로 저장하는 코드 작성
        단, 배열 인덱스를 활용하지 않고,
        포인터 두개를 이용해서 내용을 저장
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