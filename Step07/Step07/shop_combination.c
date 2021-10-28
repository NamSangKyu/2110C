#include <stdio.h>
/*
    금액(정수형)을 입력 받음 - 금액은 100원 단위로 입력 하세요
    입력한 금액에 맞게 물품을 구매하는 조합식을 출력
    물품은 꼭 반드시 1개씩은 사야됨

    과자 : 1500원
    음료 : 1000원
    삼각김밥 : 1400원

    과자 1 , 음료 2, 삼각김밥 3
    ...
    ...
*/
int main(void) {
    int money;
    int snack, drink, gimbab;
    printf("금액 입력 : ");
    scanf_s("%d", &money);

    for (snack = 1; snack < money / 1500; snack++) {
        for (drink = 1; drink < money / 1000; drink++) {
            for (gimbab = 1; gimbab < money / 1400; gimbab++) {
                if (snack * 1500 + drink * 1000 + gimbab * 1400 == money) {
                    printf("과자 %d, 음료 %d, 삼각김밥 %d\n", snack, drink, gimbab);
                }
            }
        }
    }

    return 0;
}