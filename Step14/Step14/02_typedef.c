// 02_typedef.c
#include <stdio.h>
#include <string.h>  // strcpy

void ex1() {
    // Code Ÿ���� �����Ѵ�. (��� Code�� int�̴�.)
    typedef int Code;
    Code signal = 1000;
    printf("�ڵ�: %d\n", signal);
}
void ex2() {
    struct student {
        char sno[6];
        char name[20];
        int grade;
    };
    // ����ü�� Ÿ�� : struct student
    // typedef���� ����ü Ÿ���� ���� ����� �ش�.
    typedef struct student Student;
    // Student Ÿ�� ���
    Student s;
    strcpy_s(s.sno, sizeof(s.sno),"12345");
    strcpy_s(s.name, sizeof(s.name), "ȫ�浿");
    s.grade = 5;
    printf("�й�: %s, �̸�: %s, �г�: %d\n", s.sno, s.name, s.grade);
}
void ex3() {

    // ��õ : typedef + ����ü ����
    
    // Ÿ��1 : struct student
    // Ÿ��2 : Student
    typedef struct student {
        char sno[6];
        char name[20];
        int grade;
    } Student;
    
    // Ÿ�� : ���� Teacher
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