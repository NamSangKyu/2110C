#include <stdio.h>

int main(void) {
    printf("10+20\n"); //계산식을 써도 문자열로 인식
    /*
    *       서식 문자열
    *           printf에서 출력할 문자열의 원하는 위치에
    *           데이터를 나타내기위한 특수문자
    *           %d - 정수
    *           %f , %lf - 실수
    *           %c - 문자
    *           %s - 문자열
    */
    printf("%d\n", 10+20);
    printf("%d , %d \n", 10, 20, 30);
    printf("%d + %d = %d\n", 10, 20, 10 + 20);
    return 0;
}