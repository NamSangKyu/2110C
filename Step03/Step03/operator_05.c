#include <stdio.h>
int main(void) {
    /*
    *    변수 a에 값을 10을 저장
    *    변수 a가 5보다 크고 10보다 작은지 체크해서 결과 출력
    */
    int a = 10;
    printf("%d\n", 5 < a < 10);//조건이 2개 이상일떄는 적용 X
    /*
    *   논리연산자 
    *       AND  :   &&    ---> 양쪽의 조건이 모두 true일떄 true
    *       OR   :   ||    ---> 양쪽의 조건이 하나라도 true면 true
    *       NOT  :   !     ---> true면 false, false면 true 뒤집는 연산자
    */ 
    printf("%d\n", a > 5 && a < 10);
    printf("%d\n", a < 5 || a > 7);
    printf("%d\n", !(a > 5));
    printf("%d\n", !a);

    return 0;
}