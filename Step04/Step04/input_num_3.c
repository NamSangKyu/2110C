#include <stdio.h>

int main(void) {
    int a, b, c;
    int result;
    printf("숫자 3개 입력 :");
    scanf_s("%d %d %d", &a, &b, &c);
    result = (a - b) * (b + c) / (a * c);
    printf("result : %d\n", result);

    return 0;
}