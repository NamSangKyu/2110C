// quiz.c
#include <stdio.h>
#include <string.h>

typedef struct {
    char sno[6];
    int grade;
} Student;

void input(Student* p) {
    printf("�й� >>> ");
    scanf_s("%s", p->sno, sizeof(p->sno));
    printf("�г� >>> ");
    scanf_s("%d", &p->grade);
}
void output(Student param) {
    printf("�й�: %s, �г�: %d\n", param.sno, param.grade);
}

int main() {
    Student s;
    input(&s);  // �й�, �г��� �Է� �޾� �ִ� �Լ�
    output(s);  // �й�, �г��� ����ϴ� �Լ�
}