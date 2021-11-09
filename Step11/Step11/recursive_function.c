#include <stdio.h>
/*
    재귀 함수
        함수가 자기 자신을 또 호출하는 함수
*/
//재귀 함수 문제가 되는 부분 -- 무한정 실행 되는부분이 문제
void PrintMessage() {
    printf("PrintMessage\n");
    PrintMessage();//자기 자신을 호출
}
//재귀함수가 무한정 실행되지 않게 한번은 호출을 안하는 코드 삽입
void PrintCount(int count) {
    printf("count : %d\n", count);
    count--;
    if(count > 0)
        PrintCount(count);
    printf("함수 종료 - %d\n", count);
}
int main(void) {
    //PrintMessage();
    PrintCount(5);
    printf("프로그램 종료\n");
    return 0;
}