#include <stdio.h>
/*
*   변수 - variable
        데이터를 하나 저장할 공간

    변수 타입
        정수 : short(2)   int(4)   long(4)
        실수 : float(4)   double(8)
        문자 : char(1)
    
    변수 선언
        변수타입 변수명;

    변수명 짓는 규칙
        1. 알파벳 대소문자, 숫자, _ 조합으로 이름을 지음
           대소문자 구분함
        2. 첫글자로는 숫자가 올수 없음
        3. 변수명 중복 X
        4. 변수명과 키워드가 일치 X
*/
int main(void) {
    int box;//정수를 하나 저장할 공간을 설정, 이름 box을 정함
    box = 10;
    box = 20;
    printf("%d\n", box);
    printf("%d\n", box*2);

    return 0;
}