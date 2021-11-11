#include <stdio.h>

int main(void) {
    int* iptr = 0x0000; //16Áø¼ö 0
    double* dptr = 0x0000;

    printf("%d %d\n", iptr + 1, dptr + 1);
    printf("%d %d\n", iptr + 2, dptr + 2);
    printf("%d %d\n", iptr + 3, dptr + 3);


    return 0;
}