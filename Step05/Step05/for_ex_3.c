#include <stdio.h>
//������ 2�� ~ 9�ܱ��� for�� ���
//2���� 2*2����, 3�� 3*����.... 9�� 9*9���� ����� ���
int main(void) {
    int dan, i;

    for (dan = 2; dan < 10; dan++) {
        printf("-- %d �� --\n",dan);
        for (i = 1; i <= dan; i++) {
            printf("%d * %d = %d\n", dan, i, dan * i);
        }
        printf("\n");
    }
    return 0;
}