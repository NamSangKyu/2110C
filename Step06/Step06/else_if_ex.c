#include <stdio.h>

int main(void) {
    int n;

    printf("숫자 입력 : ");
    scanf_s("%d", &n);

    if (n % 2 == 1) {
        printf("입력하신 숫자는 홀수 입니다.");
    }
    else if (n == 0) {
        printf("입력하신 숫자는 0 입니다.");
    }
    else {
        printf("입력하신 숫자는 짝수 입니다.");
    }
    return 0;
}