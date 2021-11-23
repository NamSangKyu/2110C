// quiz.c
#include <stdio.h>
#include <string.h>

typedef struct {
    char sno[6];
    int grade;
} Student;

void input(Student* p) {
    printf("학번 >>> ");
    scanf_s("%s", p->sno, sizeof(p->sno));
    printf("학년 >>> ");
    scanf_s("%d", &p->grade);
}
void output(Student param) {
    printf("학번: %s, 학년: %d\n", param.sno, param.grade);
}

int main() {
    Student s;
    input(&s);  // 학번, 학년을 입력 받아 주는 함수
    output(s);  // 학번, 학년을 출력하는 함수
}