#include <stdio.h>
/*
    ������ 2��~9�ܱ��� ���
*/
int main(void) {
    int dan=2, i=1;

    while (dan < 10) {
        printf("-- %d �� --\n", dan);
        //1~9���� ���ϴ� �ݺ��� �ۼ�
        i=1;
        while (i < 10) {
            printf("%d * %d = %d\n", dan, i, dan * i);
            i++;
        }
        dan++;
    }

    return 0;
}