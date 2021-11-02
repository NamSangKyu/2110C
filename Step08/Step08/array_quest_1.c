#include <stdio.h>
/*
    정수형 배열 길이가 10개짜리 선언 후
    배열에 내용을 직접 입력받는 반복문을 작성


*/
int main(void) {
    int arr[10];
    int i;
    int len = sizeof(arr) / sizeof(int);
    for (i = 0; i < len; i++) {
        printf("%d 번째 숫자 입력 : ", i + 1);
        scanf_s("%d", &arr[i]);
    }


    return 0;
}