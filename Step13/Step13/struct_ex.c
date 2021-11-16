#include <stdio.h>
/*
    구조체(struct)
        코드로 표현해야되는 대상의 데이터를 하나로 묶어서 표현하는 방법
        여러개의 변수를 묶어서 새로운 변수 타입을 만듬

        좌표값, 주소록, 사원정보, 학생정보......
*/
struct Position {
    int xpos;
    int ypos;
};
//주소록 - 이름, 전화번호, 나이
struct Address {
    char name[20];
    char tel[12];
    int age;
};
int main(void) {
    struct Position pos;
    struct Position p;
    pos.xpos = 10;//pos변수 안에 있는 변수 xpos를 선택
    pos.ypos = 20;//pos변수 안에 있는 변수 ypos를 선택

    p.xpos = 5;
    p.ypos = 6;
    printf("xpos : %d, ypos : %d\n", pos.xpos, pos.ypos);


    return 0;
}