// 03_file.c

// _s �Լ����� ������� �ʴ��� ���� �߻� ����
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// FILE ������ : ������ �аų�, ���� �� �ִ�.

void ex1() {

    // fopen() �Լ� : FILE ������ ����� �Լ�
    
    // t1.txt ������ w ���� ����. (write)
    // t1.txt ������ �����.
    FILE* fp = fopen("t1.txt", "w");

    // FILE ������ ���� Ȯ��
    if (fp == NULL) {
        printf("���� ������ ���� ����\n");
        return;  // �Լ� ����
    }

    // FILE ������ �ݱ�
    fclose(fp);

}
void ex2() {

    // fopen_s() �Լ� : FILE �����͸� ����� �Լ�

    FILE* fp;
    errno_t err = fopen_s(&fp, "t2.txt", "w");

    // FILE ������ ���� Ȯ��
    // errno_t Ÿ���� ������ ������ �ǹ���.
    // FILE �����Ͱ� �����Ǹ� 0�� ��ȯ��.
    if (err != 0) {
        printf("���� ������ ���� ����\n");
        return;  // �Լ� ����
    }

    // FILE ������ �ݱ�
    fclose(fp);

}
void ex3() {

    FILE* fp = fopen("t3.txt", "w");  // w ���� ������ ���� ����.

    if (fp == NULL) {
        printf("���� ������ ���� ����\n");
        return;
    }

    // fputc() �Լ�
    // 1. ���Ϸ� 1���ڸ� ������.
    // 2. 1���ڴ� char�� �ƴ� "int"�� �����ؾ� �Ѵ�.

    int a = 'H';
    int b = 'e';
    int c = 'l';
    int d = 'l';
    int e = 'o';

    int arr[5] = {'W', 'o', 'r', 'l', 'd'};

    fputc(a, fp);
    fputc(b, fp);
    fputc(c, fp);
    fputc(d, fp);
    fputc(e, fp);

    for (int i = 0; i < 5; i++) {
        fputc(arr[i], fp);
    }

    fclose(fp);

}
void ex4() {

    FILE* fp = fopen("t4.txt", "w");

    if (fp == NULL) {
        // stderr : FILE* Ÿ���� ���� ���� ��Ʈ��. ���� �޽��� �ۼ��� �� �����.
        fprintf(stderr, "���� ������ ���� ����\n");
        return;
    }

    // fputs() �Լ�
    // 1. ���ڿ��� ���Ϸ� ������.
    // 2. char �迭, char* ������ ���� ������.
    char arr[] = "hello";
    char* str = "world";

    fputs(arr, fp);
    fputs(str, fp);

    fclose(fp);

}
void ex5() {

    typedef struct _student {
        char name[20];  // �̸�
        int mid;        // �߰�
        int final;      // �⸻
        double ave;     // ���
    } Student;

    FILE* fp = fopen("����ǥ.txt", "w");

    if (fp == NULL) {
        fprintf(stderr, "���� ������ ���� ����\n");
        return;
    }

    // Student Ÿ�� �迭 ����
    Student students[3];

    // �ݺ��ؼ� 3�� ���� �Է� �ޱ�
    for (int i = 0; i < 3; i++) {
        printf("�̸� >>> ");
        scanf("%s", students[i].name);  // �迭�̹Ƿ� & ����.
        printf("�߰����� >>> ");
        scanf("%d", &students[i].mid);  // �����̹Ƿ� & �ʿ���.
        printf("�⸻���� >>> ");
        scanf("%d", &students[i].final);
        students[i].ave = (students[i].mid + students[i].final) * 0.5;
    }

    // ����ǥ.txt ������ ��������.
    // ������ csv ��������(�޸��� ����)
    for (int i = 0; i < 3; i++) {
        fprintf(fp, "%s,%d,%d,%.1f\n", students[i].name
            , students[i].mid
            , students[i].final
            , students[i].ave);
    }

    fclose(fp);

}
void ex6() {

    // w ��� : ������ ���� �����.
    
    // a ��� : append ���(�߰� ���)
    // ���� ����ų�(������ ���� ��), ������ �߰��Ѵ�.(������ ���� ��)

    FILE* fp = fopen("t6.txt", "a");  // 1��° ������ t6.txt ������ ���� ������ ���� ����.
                                      // 2��° ������ʹ� t6.txt ������ �ֱ� ������ ���� ���뿡 �߰���.

    if (fp == NULL) {
        fprintf(stderr, "���� ������ ���� ����\n");
        return;
    }

    fprintf(fp, "Hello World");

    fclose(fp);

}
int main() {
    ex6();
}