#include <stdio.h>
/*

    ���� �ϳ� �Է� ���� ��
    �Է¹��� ������ŭ �ﰢ���� ���

    ���� �Է� : 7
                �ٹ�ȣ     ������    ���� ����
          *     1           1       6
         **     2           2       5
        ***     3           3       4
       ****     4           4       3
      *****     5           5       2
     ******     6           6       1
    *******     7           7       0

*/
int main(void) {
    //    �ٰ��� ������ ���鰳��
    int i=0, line, star, space;

    printf("�ٰ��� �Է� : ");
    scanf_s("%d", &line);

    while (i < line) {
        space = 0;
        while (space < line - 1 - i) {
            printf(" ");
            space++;
        }
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