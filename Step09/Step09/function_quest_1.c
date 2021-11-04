#include <stdio.h>
// 반지름 하나 매개변수로 받아서 원넓이를 리턴하는 함수
double areaCircle(double r) {
    return r * r * 3.1415;
}
// 숫자 두개를 매개변수로 받아서 큰값을 출력하는 함수
void printMax(int n1, int n2) {
    if (n1 > n2)
        printf("두 숫자중 큰 값 : %d\n", n1);
    else
        printf("두 숫자중 큰 값 : %d\n", n2);
}
// 메인에서 호출해서 테스트
int main(void) {
    double r = 4.2;
    printf("원넓이 : %g\n", areaCircle(r));
    printMax(3, 2);
    printMax(1, 4);
    return 0;
}