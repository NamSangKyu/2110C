#include <stdio.h>
/*
*   if문
        조건식의 결과가 true 때만 한번 실행하는 문법 

    if       --> 첫번째 조건(이벤트 시작)
    else if  --> 두번째 이상 조건 (이전 조건이 거짓이어야 수행)
    else     --> 모든 조건이 거짓이어야 수행
        
*/
int main(void) {

    int n;

    printf("숫자 입력 : ");
    scanf_s("%d", &n);

    if (n % 2 == 0) {
        printf("입력하신 숫자는 짝수 입니다\n");
    }
    if (n % 2 == 1) {
        printf("입력하신 숫자는 홀수 입니다\n");
    }
    return 0;
}