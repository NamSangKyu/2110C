// 03_pointer.c
#include <stdio.h>
#include <string.h>

void ex1() {
    // ����ü ����
    typedef struct {
        char sno[6];
        char name[20];
    } Student;
    // ����ü ���� �ʱ�ȭ
    Student s = { "12345", "ȫ�浿" };
    // ����ü ������ ������ ����
    // ����ü ���� s�� ����Ų��.
    Student* p = &s;
    /*
     variable     memory         address
              ---------------
     s  sno   |   "12345"   |    0x100
              ---------------
       name   |   "ȫ�浿"   |
     ----------------------------------
     p        |   0x100     |
              ---------------
    */
   
    // *p �̰��� s�� ���� �ǹ��̴�.
    printf("�й�: %s\n", (*p).sno);
    // printf("�й�: %s\n", *p.sno);   �߸��� ���
    // printf("�й�: %s\n", *(p.sno)); �߸��� ���

    // �޸� ���� ������ ������� �ʴ� ����� �ִ�.
    // arrow(ȭ��ǥ) : ->
    printf("�̸�: %s\n", p->name);
}
void ex2() {
    // ����ü Student
    typedef struct {
        char sno[6];
        char name[20];
    } Student;
    // ����ü StudyRoom
    typedef struct {
        char roomName[20];
        Student* p;  // Student ������ �ּҸ� ����
    } StudyRoom;
 
    // Student ����
    Student s = { "12345", "alice" };

    // StudyRoom ����
    StudyRoom room = { "��������", &s };

    // StudyRoom ���� ���
    printf("�� �̸�: %s\n", room.roomName);
    printf("�й�: %s\n", room.p->sno);
    printf("�̸�: %s\n", room.p->name);
}
int main() {
    ex2();
}