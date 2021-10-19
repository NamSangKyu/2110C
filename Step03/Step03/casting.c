#include <stdio.h>
/*
*  형변환(Casting)
*       1. 강제로 형변환 : 사용자가 원할때 강제로 타입을 변경할때
*       2. 자동으로 형변환 : 계산식에 의해서 값의 타입이 자동으로 변경
*/
int main(void) {
    //1. 강제로 형변환
    double result1 = (double)10 / 3;
    printf("result1 : %lf\n", result1);
    //2. 자동 형변환
    double result2 = 10 / 3.0;
    printf("result2 : %lf\n", result1);
    return 0;
}