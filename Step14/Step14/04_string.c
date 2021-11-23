// 04_string.c
/*
*   #include <string.h> 
*   1. strlen() : ���ڿ� ����
*   2. strcpy() : ���ڿ� ����
*   3. strcat() : ���ڿ� ����
*   4. strcmp() : ���ڿ� ��
*   5. strtok() : ���ڿ� �и�
*/
#include <stdio.h>
#include <string.h>

void ex1() {
    char s1[10] = "hello";
    char* s2 = "world";
    printf("�迭 ũ�� : %d\n", sizeof(s1));
    printf("���ڿ� ���� : %d\n", strlen(s1));
    // ������ ũ��
    // 1. �ü�� bit : 64bit
    // 2. �����Ϸ� bit : 32bit
    // �� �� ���� �� 32bit(4byte)�� ũ��� ����.
    printf("������ ũ�� : %d\n", sizeof(s2));
    printf("���ڿ� ���� : %d\n", strlen(s2));
}
void ex2() {
    char src[10] = "hello";
    char des[10];

    // �迭 �̸��� �ּ� ���̱� ������ �Ʒ� �ڵ�� �ּ� ������ ����ȴ�.
    // des = src;

    // strcpy(des, src)
    // strcpy_s(des, sizeof(des), src)
    strcpy_s(des, sizeof(des), src);
    printf("%s\n", des);
}
void ex3() {
    char s1[10] = "hello";
    char s2[5] = "jack";
    // strcat(s1, s2) : s1 �ڿ� s2�� �����Ѵ�.
    //                  s1�� ������Ƿ� ����� ������ �־�� �Ѵ�.
    // strcat_s(s1, sizeof(s1), s2)
    strcat_s(s1, sizeof(s1), s2);  // s1 : "hellojack"
    printf("s1: %s\n", s1);  // hellojack
    printf("s2: %s\n", s2);  // jack
}

// C�� true(1), false(0)�� �����Ƿ� �����ؼ� ����Ѵ�.
#define FALSE 0
#define TRUE 1

void ex4() {
    char s1[10] = "hello";
    char s2[20] = "hello";
    // strcmp(s1, s2) : ���� ���ڿ��� 0�� ��ȯ��, �ٸ��� -1 �Ǵ� 1�� ��ȯ��.
    if (strcmp(s1, s2) == FALSE) {
        printf("���� ���ڿ�\n");
    }
    else {
        printf("�ٸ� ���ڿ�\n");
    }
    // strcmp(s1, s2) == 0  :  0�� false�� �ǹ���.
    // !strcmp(s1, s2)      :  !(not) �������� ���� ���ڿ��̸� true�� ��ȯ.
    if ( !strcmp(s1, s2) ) {
        printf("���� ���ڿ�\n");
    }
    else {
        printf("�ٸ� ���ڿ�\n");
    }
    
}
int main() {
    ex4();
}
