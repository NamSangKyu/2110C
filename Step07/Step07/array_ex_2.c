#include <stdio.h>

int main(void) {
    //정수형 배열 크기가 5개인 배열 선언
    int arr[5];
    int i;
    //배열에 순서대로 1~5까지 저장
    for (i = 0; i < 5; i++)
        arr[i] = i + 1;

    //배열에 내용을 전부 출력
    for (i = 0; i < 5; i++)
        printf("%d\n", arr[i]);

    return 0;
}