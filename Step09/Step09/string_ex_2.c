#include <stdio.h>

int main(void) {
    char str[20];
    int i;
    printf("���ڿ� �Է� : ");
    scanf_s("%s", str, sizeof(str));

    for (i = 0; i < 20; i++)
        printf("%d ", str[i]);
    

    return 0;
}