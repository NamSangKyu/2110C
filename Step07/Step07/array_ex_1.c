#include <stdio.h>
/*
 배열(Array)
    하나의 변수명으로 여러개의 변수를 선언하여 사용하는 변수
    변수명이 동일하기 떄문에 인덱스(번호표)를 이용해서 하나의 변수를 선택

인덱스는 0부터 시작
인덱스 범위 : 0 ~ 배열개수 - 1
*/
int main(void) {
    int arr[5];//변수명 arr로 정수형 변수 5개 선언
    int i;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    for (i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
    

    return 0;
}