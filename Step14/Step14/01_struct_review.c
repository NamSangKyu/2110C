// 01_struct_review.c
#include <stdio.h>

// 구조체 정의
struct student {
    char sno[6];  // 학번 최대 5자
    char name[20];  // 이름
    int grade;  // 학년
};

int main() {

    // 구조체 변수 선언
    // 타입 : struct student
    // 변수 : s
    struct student s;

    // 변수 s는 3개의 멤버가 있다.

    // 입력 받기
    printf("학번 5자리 입력 >>> ");
    scanf_s("%s", s.sno, sizeof(s.sno));
    getchar();  // 입력버퍼에 남아 있는 엔터 제거
    printf("이름 입력 >>> ");
    gets_s(s.name, sizeof(s.name));
    printf("학년 입력 >>> ");
    scanf_s("%d", &s.grade);

    // 출력 하기
    printf("학번: %s, 이름: %s, 학년: %d\n", s.sno, s.name, s.grade);

    return 0;
}