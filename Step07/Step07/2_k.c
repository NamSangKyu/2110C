#include <stdio.h>
/*
    숫자를 입력 받음
    입력 받은 숫자 k
          
    k <= 2의 n승 만족하는 최대값 n을 출력

    121을 입력
    2의 7승 --> 128 

    출력할 n값은 7


*/
int main(void) {
    int k, n, i=1;

    printf("숫자 입력 : ");
    scanf_s("%d", &k);

    for (n = 0; k > i; n++) {
        i *= 2;
    }

    printf("n : %d\n", n);
  
    return 0;
}