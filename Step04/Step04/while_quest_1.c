#include <stdio.h>

int main(void) {
    int ea;

    printf("���� �ϳ� �Է� : ");
    scanf("%d", &ea);

    while (ea > 0) {
        printf("Hello World\n");
        ea--;
    }

    return 0;
}