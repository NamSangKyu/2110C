// 01_struct_review.c
#include <stdio.h>

// ����ü ����
struct student {
    char sno[6];  // �й� �ִ� 5��
    char name[20];  // �̸�
    int grade;  // �г�
};

int main() {

    // ����ü ���� ����
    // Ÿ�� : struct student
    // ���� : s
    struct student s;

    // ���� s�� 3���� ����� �ִ�.

    // �Է� �ޱ�
    printf("�й� 5�ڸ� �Է� >>> ");
    scanf_s("%s", s.sno, sizeof(s.sno));
    getchar();  // �Է¹��ۿ� ���� �ִ� ���� ����
    printf("�̸� �Է� >>> ");
    gets_s(s.name, sizeof(s.name));
    printf("�г� �Է� >>> ");
    scanf_s("%d", &s.grade);

    // ��� �ϱ�
    printf("�й�: %s, �̸�: %s, �г�: %d\n", s.sno, s.name, s.grade);

    return 0;
}