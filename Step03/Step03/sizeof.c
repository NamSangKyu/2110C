#include <stdio.h>

int main(void) {

    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(4));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(3.1415));
    printf("%d\n", sizeof(3.1415f));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(10 > 5));

    return 0;
}