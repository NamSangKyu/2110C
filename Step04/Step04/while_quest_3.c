#include <stdio.h>

int main(void) {

    int ea, i=0;
    int total=0,num;

    printf("�Է¹��� ���� ���� : ");
    scanf("%d", &ea);

    while (i < ea) {
        printf("���� �Է� : ");
        scanf("%d", &num);
        total += num;
        i++;
    }
    printf("��� : %g\n", (double)total / ea);
    return 0;
}