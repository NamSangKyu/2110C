#include <stdio.h>

int main(void) {
    int n=100;

    printf("���� �ϳ� �Է� : ");
    scanf("%d", &n);//scanf_s("%d", &n);
    printf("n : %d\n", n);

    int n1, n2;
    printf("���� �ΰ� �Է� : ");
    scanf("%d %d", &n1, &n2);
    printf("n1 : %d, n2 : %d\n",n1,n2);

    return 0;
}