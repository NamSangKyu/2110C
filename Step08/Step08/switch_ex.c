#include <stdio.h>
/*
    선택문(switch)
       값을 기준으로 실행할 코드를 작성

    선택한 값이 정확하게 범위가 정해진 경우(범위 적은 경우)
*/
int main(void) {
    int n;
    printf("숫자 입력 : ");
    scanf_s("%d", &n);

    switch (n) {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    default:
        printf("No Value Number");
    }


    return 0;
}