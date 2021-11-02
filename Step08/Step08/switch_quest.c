#include <stdio.h>
/*
    점수 하나 입력
    90~100 성적 등급 A
    80~89  성적 등급 B
    70~79  성적 등급 C
    60~69  성적 등급 D
     0~59  성적 등급 F
*/

int main(void) {
    int score;

    printf("점수 입력 : ");
    scanf_s("%d", &score);

    switch (score / 10) {
    case 10:
    case 9:
        printf("성적 등급 : A");
        break;
    case 8:
        printf("성적 등급 : B");
        break;
    case 7:
        printf("성적 등급 : C");
        break;
    case 6:
        printf("성적 등급 : D");
        break;
    default:
        printf("성적 등급 : F");
    }
    return 0;
}