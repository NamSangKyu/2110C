#include <stdio.h>

int main(void) {
    //정수형 변수 두개 선언을 해서 
    //변수명은 num1, num2
    //값은 10, 20으로 저장 후 출력
    int num1 = 10; //변수를 선언과 동시에 초기화
    int num2 = 20;
    int n1, n2; //정수형 변수로 n1, n2를 선언
    int n3 = 1, n4 = 2, n5 = 3;//여러개 변수 선언과 동시에 초기화

    printf("%d %d\n", num1, num2);
    printf("%d %d %d\n", n3, n4, n5);
    return 0;
}