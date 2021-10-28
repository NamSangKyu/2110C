#include <stdio.h>
//배열 초기화 예제
int main(void) {
    //       index- 0 1 2 3 4
    int arr1[5] = { 1,2,3,4,5 };
    //      index- 0 1 2 3 4 5 6
    int arr2[] = { 1,2,3,4,5,6,7 };//[] 개수가 없으면 초기화하는 값의 개수만큼 할당
    int arr3[5] = { 1,2,3 };


    int i;
    //arr1 출력
    for (i = 0; i < 5; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    //arr2 출력
    for (i = 0; i < 7; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    //arr3 출력

    return 0;
}