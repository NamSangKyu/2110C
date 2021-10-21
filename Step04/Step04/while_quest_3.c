#include <stdio.h>

int main(void) {

    int ea, i=0;
    int total=0,num;

    printf("입력받을 숫자 개수 : ");
    scanf("%d", &ea);

    while (i < ea) {
        printf("숫자 입력 : ");
        scanf("%d", &num);
        total += num;
        i++;
    }
    printf("평균 : %g\n", (double)total / ea);
    return 0;
}