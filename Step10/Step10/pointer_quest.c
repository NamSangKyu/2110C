#include <stdio.h>
int Abs1(int n) {
    if (n < 0)
        n = -n;
    return n;
}
void Abs2(int* n) {
    if (*n < 0)
        *n = -*n;
}
int main(void) {
    int n = 0;

    printf("���� �Է� : ");
    scanf_s("%d", &n);

    printf("|n| = %d\n", Abs1(n));
    Abs2(&n);
    printf("|n| = %d\n", n);
    return 0;
}