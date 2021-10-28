#include <stdio.h>
/*
    숫자 하나 입력 후
    해당 숫자가 소수인지 판단하여 출력
    소수는 1과 자기자신으로 나누어지는 숫자

    숫자 입력 : 5
    소수입니다.

    숫자 입력 : 4
    소수가 아닙니다.
*/
int main(void) {
    int n, i;

    printf("숫자 입력 : ");
    scanf_s("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0)
            break;
    }

    if (n == i) 
        printf("입력하신 숫자는 소수 입니다.");
    else
        printf("입력하신 숫자는 소수가 아닙니다.");
    
    return 0;
}