#include <stdio.h>
int main(void) {
    int n = 10;
    /*
    *   복합대입 연산자
    *       +=  -=  *=  /=  %=
    */
    n += 10;//n = n + 10; // n과 10을 더한 결과를 다시 n에 저장
    printf("n : %d\n", n);
    n -= 10;//n = n - 10;
    printf("n : %d\n", n);
    n *= 3;//n = n * 3;
    printf("n : %d\n", n);

    return 0;
}