#include <stdio.h>
#include <stdlib.h>

//���� - �����Ҵ�
int* stack;
//���ÿ� ������ �� �ִ� �ִ� ����
int max;
//�����͸� �߰��� ��ġ - TOP
int top;

void Init() {
    //���� ������ �Է� ����
    int size;
    //�Է¹��� ������ŭ �����Ҵ�
    printf("���� ���� �Է� : ");
    scanf_s("%d", &size);
    stack = (int*)malloc(sizeof(int) * size);
    //�ִ밳�� ����
    max = size;
    //TOP �ʱ�ȭ
    top = 0;
}
//������ �߰�, n - �߰��� ������
int Push(int n) {
    //������ ������ �ִ��� üũ
    //  ������ ������ ������ 0 ����
    //������ �߰�
    //TOP ����
    //������ �߰��� ���������� �Ǹ� 1����
}
//������ �б�
int Pop() {
    //����� �����Ͱ� �ִ��� üũ
    //  ����� �����Ͱ� ������ -1 ����
    //�����͸� ���� TOP�� ����
}
int main(void) {
    /*
    *   ���α׷� ����
    *   1. push
    *   2. pop
    *   3. exit
    *   input meno no : 
    *   
    */

}


