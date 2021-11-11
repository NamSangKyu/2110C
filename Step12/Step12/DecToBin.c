#include <stdio.h>
void DecToBin1(int n) {
    if (n < 2)
        printf("%d", n);
    else {
        int mod = n % 2;
        DecToBin1(n / 2);
        printf("%d", mod);
    }
}
void DecToBin2(int n) {
    int r = 1;
    while (r <= n)
        r *= 2;
    r /= 2;
    
    while (r != 0) {
        printf("%d", n / r);
        n %= r;
        r /= 2;        
    }
}
int main(void) {
    int n;

    printf("숫자 입력 : ");
    scanf_s("%d", &n);
    DecToBin1(n);
    printf("\n");
    DecToBin2(n);
    return 0;
}