// 02_typedef.c
#include <stdio.h>
#include <string.h>  // strcpy

void ex1() {
    // Code 타입을 정의한다. (사실 Code는 int이다.)
    typedef int Code;
    Code signal = 1000;
    printf("코드: %d\n", signal);
}
void ex2() {
    struct student {
        char sno[6];
        char name[20];
        int grade;
    };
    // 구조체의 타입 : struct student
    // typedef으로 구조체 타입을 새로 만들어 준다.
    typedef struct student Student;
    // Student 타입 사용
    Student s;
    strcpy_s(s.sno, sizeof(s.sno),"12345");
    strcpy_s(s.name, sizeof(s.name), "홍길동");
    s.grade = 5;
    printf("학번: %s, 이름: %s, 학년: %d\n", s.sno, s.name, s.grade);
}
void ex3() {

    // 추천 : typedef + 구조체 정의
    
    // 타입1 : struct student
    // 타입2 : Student
    typedef struct student {
        char sno[6];
        char name[20];
        int grade;
    } Student;
    
    // 타입 : 오직 Teacher
    typedef struct {
        char name[20];
        int grade;
        Student students[3];
    } Teacher;

}
int main() {
    ex2();
    return 0;
}