#include <stdio.h>

int main(void) {
    int a, b, c;
    int result;
    printf("���� 3�� �Է� :");
    scanf_s("%d %d %d", &a, &b, &c);
    result = (a - b) * (b + c) / (a * c);
    printf("result : %d\n", result);

    return 0;
}