#include <stdio.h>
/*
*   ���� 0�� �Է��Ҷ����� �����Է��� ����
*   0�� �Է��ϸ� �Է��� ���ڵ��� ������ ���
* 
*   while_quest_4.c�� ������ for������ ����
*/
int main(void) {

    int num=1, total=0;

    for ( ; num != 0; ) {
        printf("���� �Է� : ");
        scanf_s("%d", &num);
        total += num;
    }
    printf("�Է��Ͻ� ���ڵ��� ���� : %d\n", total);

    return 0;
}