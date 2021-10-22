#include <stdio.h>
/*
    구구단 2단~9단까지 출력
*/
int main(void) {
    int dan=2, i=1;

    while (dan < 10) {
        printf("-- %d 단 --\n", dan);
        //1~9까지 곱하는 반복문 작성
        i=1;
        while (i < 10) {
            printf("%d * %d = %d\n", dan, i, dan * i);
            i++;
        }
        dan++;
    }

    return 0;
}