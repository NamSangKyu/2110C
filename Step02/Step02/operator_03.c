#include <stdio.h>
/*
*   증감연산자
        변수에 있는 값을 1씩 증가, 감소 연산자
        ++  --> 변수의 값을 1 증가
        --  --> 변수의 값을 1 감소

        n1++ --> 후위형 --> 일단 ++가 속한 연산을 먼저하고 난뒤에 증가
        ++n1 --> 전위형 --> 일단 ++ 먼저 수행 연산을 마저 수행
*/
int main(void) {
    int n1 = 10, n2 = 10;

    printf("%d\n", n1);
    printf("%d\n", n1++);
    printf("%d\n", n1);
    
    printf("%d\n", n2);
    printf("%d\n", ++n2);
    printf("%d\n", n2);

    int result, n3 = 10;
    
    result = n3++ * 2 + ++n3 / 3;
    printf("result : %d, n3 : %d\n", result,n3);
    return 0;
}