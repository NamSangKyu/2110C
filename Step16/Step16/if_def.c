#include <stdio.h>
#define VERSION 1
int main(void) {
#if VERSION == 1
    printf("���� 1\n");
#elif VERSION == 2
    printf("���� 2\n");
#else
    printf("���� X\n");
#endif

#ifdef VERSION
    printf("VERSION �����\n");
#endif 

#ifndef VERSION
    printf("VERSION ���� �ȵ�\n");
#endif 

    return 0;
}