#include <stdio.h>
/*
    전역변수 - 데이터 영역 사용
        모든 함수에서 동일한 변수를 사용
        전역변수는 함수 밖에다가 선언
*/
int count = 0;
int sum(int a, int b) {
    count++;
    return a + b;
}
int main(void) {
    int count = -1;//지역변수와 전역변수가 이름이 같으면 전역변수에 접근 X
    printf("sum : %d\n", sum(2, 45));
    printf("sum : %d\n", sum(6, 5));
    printf("sum : %d\n", sum(1, 4));
    printf("count : %d\n", count);
    return 0;
}