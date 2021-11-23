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
    if (top == max) return 0;
    //������ �߰�
    //TOP ����
    stack[top++] = n;
    //������ �߰��� ���������� �Ǹ� 1����
    return 1;
}
//������ �б�
int Pop() {
    //����� �����Ͱ� �ִ��� üũ
    //  ����� �����Ͱ� ������ -1 ����
    if (top == 0) return -1;
    //�����͸� ���� TOP�� ����
    return stack[--top];
}
int main(void) {
    int no;
    Init();
    while (1) {
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. exit\n");
        printf("input meno no : ");
        scanf_s("%d", &no);
        if (no == 1) {
            printf("�߰��� ���� �Է� : ");
            scanf_s("%d", &no);
            if (Push(no))
                printf("������ �߰� ����\n");
            else
                printf("������ �߰� ����\n");
        }
        else if (no == 2) {
            no = Pop();
            if (no == -1)
                printf("���ÿ� �����Ͱ� �����ϴ�.\n");
            else
                printf("POP : %d\n", no);

        }
        else {
            break;
        }
    }

}


