#include <stdio.h>
/*
    static 변수
        함수가 끝나더라도 계속 보관해야되는 값이 있을때
        static으로 변수 선언하면 stack이 아니라 데이터 영역에 메모리 할당
*/

int sum(int a, int b) {
    //stack이 아니라 데이터 영역에 할당, 함수가 끝나도 사라지지 않음
    static int count = 0; //최초 한번만 실행됨
    count++;
    printf("count : %d\n",count);
    return a + b;
}

int main(void) {
    sum(10, 2);
    sum(1, 3);
    sum(5, 4);
    sum(70, 56);

    return 0;
}