#include <stdio.h>
/*
    금액(정수형)을 입력받아서
    각 화폐별 개수를 출력

    금액 : 79360
    50000원 : 1
    10000원 : 2
    5000원 : 1
    1000원 : 4
    500원 : 0
    100원 : 3
    50원 : 1
    10원 1
*/
int main(void) {
    int money, ea = 50000, sw = 0;

    printf("금액을 입력 : ");
    scanf_s("%d", &money);

    while (ea >= 10) {
        printf("%d 원 : %d\n", ea, money / ea);
        money %= ea;
        if (sw)
            ea /= 2;
        else
            ea /= 5;
        sw = !sw;
    }
    return 0;
}