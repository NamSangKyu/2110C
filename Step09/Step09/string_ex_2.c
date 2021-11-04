#include <stdio.h>

int main(void) {
    char str[20];
    int i;
    printf("문자열 입력 : ");
    scanf_s("%s", str, sizeof(str));

    for (i = 0; i < 20; i++)
        printf("%d ", str[i]);
    

    return 0;
}