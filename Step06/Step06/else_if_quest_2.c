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
    
    if (score >= 90) {
        printf("성적 등급 : A");
    }
    else if (score >= 80) {
        printf("성적 등급 : B");
    }
    else if (score >= 70) {
        printf("성적 등급 : C");
    }
    else if (score >= 60) {
        printf("성적 등급 : D");
    }
    else {
        printf("성적 등급 : F");
    }
    return 0;
}