#include <stdio.h>

int main(void) {
    /*
    *   double형 변수 하나 선언 후
        실수 하나 입력을 받아서
        해당 실수의 원넓이를 출력
    */
    double r, area;
    const double PI = 3.1415;//상수 - 바뀌지 않는 값
    
    printf("반지름 하나 입력 : ");
    scanf("%lf", &r);

    area = r * r * PI;

    printf("원넓이 : %g\n", area);

    return 0;
}