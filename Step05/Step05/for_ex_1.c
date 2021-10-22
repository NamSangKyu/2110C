#include <stdio.h>
/*
*   정수하나 입력받은 후
*   입력 받은 정수만큼 Hello World 출력
*/ 
int main(void) {
    int i, ea;

    printf("숫자 입력 : ");
    scanf_s("%d", &ea);
    for (i = 0; i < ea; i++) {
        printf("Hello World\n");
    }

    return 0;
}