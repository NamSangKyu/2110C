#include <stdio.h>
/*
*   �����ϳ� �Է¹��� ��
*   �Է� ���� ������ŭ Hello World ���
*/ 
int main(void) {
    int i, ea;

    printf("���� �Է� : ");
    scanf_s("%d", &ea);
    for (i = 0; i < ea; i++) {
        printf("Hello World\n");
    }

    return 0;
}