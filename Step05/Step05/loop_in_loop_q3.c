#include <stdio.h>
/*

    ���� �ϳ� �Է� ���� ��
    �Է¹��� ������ŭ �ﰢ���� ���

    ���� �Է� : 7
                    �ٹ�ȣ     ������    ���� ����
          *             1        1      6
         ***            2        3      5
        *****           3        5      4
       *******          4        7      3
      *********         5        9      2 
     ***********        6        11     1
    *************       7        13     0

*/
int main(void) {
    int i = 0, line, star=0, space=0;

    printf("�� ���� : ");
    scanf_s("%d", &line);

    while (i < line) {
        space = 0;
        while (space < line - 1 - i) {
            printf(" ");
            space++;
        }
        star = 0;
        while (star < (i + 1) * 2 - 1) {
            printf("*");
            star++;
        }
        printf("\n");
        i++;
    }
        
    return 0;
}