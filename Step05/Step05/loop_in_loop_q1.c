#include <stdio.h>
/*

    ���� �ϳ� �Է� ���� ��
    �Է¹��� ������ŭ �ﰢ���� ���

    ���� �Է� : 7
                �ٹ�ȣ     ������
    *           1           1
    **          2           2
    ***         3           3
    ****        4           4
    *****       5           5   
    ******      6           6
    *******     7           7

*/
int main(void) {
    int line, i=0, star;

    printf("�ٰ��� �Է� : ");
    scanf_s("%d", &line);
    while (i < line) {
        star = 0;
        while (star <= i) {
            printf("*");
            star++;
        }
        printf("\n");
        i++;
    }

    return 0;
}