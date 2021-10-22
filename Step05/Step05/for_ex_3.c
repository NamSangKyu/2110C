#include <stdio.h>
//구구단 2단 ~ 9단까지 for문 출력
//2단은 2*2까지, 3단 3*까지.... 9단 9*9까지 결과만 출력
int main(void) {
    int dan, i;

    for (dan = 2; dan < 10; dan++) {
        printf("-- %d 단 --\n",dan);
        for (i = 1; i <= dan; i++) {
            printf("%d * %d = %d\n", dan, i, dan * i);
        }
        printf("\n");
    }
    return 0;
}