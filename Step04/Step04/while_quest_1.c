#include <stdio.h>

int main(void) {
    int ea;

    printf("숫자 하나 입력 : ");
    scanf("%d", &ea);

    while (ea > 0) {
        printf("Hello World\n");
        ea--;
    }

    return 0;
}