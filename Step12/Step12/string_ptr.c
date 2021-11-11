#include <stdio.h>

int main(void) {
    char str[] = "Hello World";
    char* ptr = "Hello World";

    printf("%s %s\n", str, ptr);

    str[0] = 'W';
    //Hello World라는 상수를 가리키기 떄문에 바꿀수 없다
    //ptr[0] = 'W';

    printf("%s %s\n", str, ptr);
    return 0;
}