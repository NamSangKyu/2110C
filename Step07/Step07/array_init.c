#include <stdio.h>
//배열 초기화 예제
int main(void) {
    //       index- 0 1 2 3 4
    int arr1[5] = { 1,2,3,4,5 };
    //      index- 0 1 2 3 4 5 6
    int arr2[] = { 1,2,3,4,5,6,7 };//[] 개수가 없으면 초기화하는 값의 개수만큼 할당
    // 초기화하는 값의 개수가 모자르면 자동으로 0으로 채움, 초기화는 인덱스 0부터 채움
    //      index - 0 1 2
    int arr3[5] = { 1,2,3 };
    int arr4[5] = { 0 };//배열의 모든 요소를 0으로 초기화


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
    for (i = 0; i < 5; i++)
        printf("%d ", arr3[i]);
    printf("\n");
    return 0;
}