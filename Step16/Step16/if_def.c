#include <stdio.h>
#define VERSION 1
int main(void) {
#if VERSION == 1
    printf("버전 1\n");
#elif VERSION == 2
    printf("버전 2\n");
#else
    printf("버전 X\n");
#endif

#ifdef VERSION
    printf("VERSION 선언됨\n");
#endif 

#ifndef VERSION
    printf("VERSION 선언 안됨\n");
#endif 

    return 0;
}