#include <stdio.h>

int main(void) {
    int num1 = 10, num2 = 20;
    int* ptr = &num1;

    printf("num1의 주소값 %p, ptr이 저장하고 있는 주소값 : %p\n", &num1, ptr);
    num1 += 1;
    *ptr += 1;
    printf("num1이 저장하고 있는 값 : %d, ptr이 가리키고 있는 변수가 저장되어 있는 값: %d\n", num1, *ptr);

    ptr = &num2;//ptr이 num2를 가리킨다.
    printf("num2의 주소값 %p, ptr이 저장하고 있는 주소값 : %p\n", &num2, ptr);
    num2 += 1;
    *ptr += 1;
    printf("num2이 저장하고 있는 값 : %d, ptr이 가리키고 있는 변수가 저장되어 있는 값: %d\n", num2, *ptr);
    return 0;
}