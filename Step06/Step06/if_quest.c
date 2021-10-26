#include <stdio.h>
/*
    1부터 100까지 숫자들 중 3과 5의 배수를 출력
    단 3과 5의 공배수는 한번만 출력
    반복문 if문을 사용
*/
int main(void) {
    int i;

    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}