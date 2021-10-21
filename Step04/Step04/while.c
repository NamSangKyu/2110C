#include <stdio.h>
/*
    반복문(Loop)
        연속적으로 동일한 코드를 반복해서 실행하는 것을
        하나로 묶어서 표현하는 문법
        ※ 원하는 횟수만큼 해당 코드를 반복해서 실행하는 것

        반복문 3요소
            제어변수 초기값
            조건식
            제어변수 값 변경식
*/
int main(void) {
    int i = 0;

    while (i < 5) {
        printf("Hello World\n");
        i++;
    }   

    return 0;
}