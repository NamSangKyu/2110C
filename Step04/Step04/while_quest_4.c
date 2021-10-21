#include <stdio.h>

int main(void) {
    int total = 0, num=1; 

    while (num != 0) {
        printf("숫자 입력 : ");
        scanf("%d", &num);
        total += num;
    }

    printf("total : %d\n", total);
    return 0;
}