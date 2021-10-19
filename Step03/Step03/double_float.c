#include <stdio.h>
int main(void) {
    //float - 4 byte - %f, double - 8 byte - %lf
    double pi = 3.1415;
    printf("pi : %.3lf\n", pi);//자리수가 모자르면 반올림
    //반지름이 3인 원넓이 출력
    printf("반지름이 3인 원넓이 : %lf\n", 3 * 3 * pi);

    //위에 코드를 float 타입의 변수로 선언해서 동일하게 처리
    float pi2 = 3.1415f;
    printf("pi2 : %lf\n", pi2);
    printf("반지름이 3인 원넓이 : %lf\n", 3 * 3 * pi2);
    return 0;
}