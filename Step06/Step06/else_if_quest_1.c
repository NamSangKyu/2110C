#include <stdio.h>
/*
    나이를 입력 받아서
    0~7세   유아    - 입장료 1000원 출력
    8~19세  청소년  - 입장료 1500원 출력
    20~59세 성인    - 입장료 2000원 출력
    60세 이상       - 입장료 무료
*/
int main(void) {
    int age;

    printf("나이 입력 : ");
    scanf_s("%d", &age);

    if (age >= 60) {
        printf("입장료 무료");
    }
    else if (age >= 20) {
        printf("입장료 2000원");
    }
    else if (age >= 8) {
        printf("입장료 1500원");
    }
    else {
        printf("입장료 1000원");
    }
    return 0;
}