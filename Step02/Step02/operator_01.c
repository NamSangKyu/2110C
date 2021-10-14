/*
*   기본 코드 작성
*   정수형 변수 두개 선언
*   원하시는 값으로 초기화* 
*/
#include <stdio.h>

int main(void) {
    int n1=10, n2=3;

    /*
    *   사칙연산
    *   +   -   *   /(몫)   %(나머지)
    */
    printf("%d\n", n1 + n2);
    printf("%d\n", n1 - n2);
    printf("%d\n", n1 * n2);
    printf("%d\n", n1 / n2);
    printf("%d\n", n1 % n2);
    return 0;
}