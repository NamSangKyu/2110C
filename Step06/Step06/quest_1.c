#include <stdio.h>
/*
    숫자 두개를 입력해서
    두수의 최대 공약수를 출력
*/

int main(void) {
    int n1, n2, i, gcd;

    printf("숫자 두개 입력 : ");
    scanf_s("%d %d", &n1, &n2);

    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for (i = 1; i <= n1; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    printf("두수의 최대 공약수 : %d\n", gcd);
    return 0;
}