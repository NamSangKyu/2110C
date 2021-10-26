#include <stdio.h>
/*
    숫자 두개를 입력 받은 뒤
    두 숫자의 뺄셈 결과가 무조건 양수가 나오게끔 출력
    예)
    5 7 입력 ---> 2
    7 5 입력 ---> 2
*/
int main(void) {
    int n1, n2, result;

    printf("숫자 2개 입력 : ");
    scanf_s("%d %d", &n1, &n2);

    result = n1 - n2;

    if (result < 0) {
        result = -result;
    }
    
    printf("%d\n", result);

    return 0;
}