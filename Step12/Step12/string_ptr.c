#include <stdio.h>

int main(void) {
    char str[] = "Hello World";
    char* ptr = "Hello World";

    printf("%s %s\n", str, ptr);

    str[0] = 'W';
    //Hello World��� ����� ����Ű�� ������ �ٲܼ� ����
    //ptr[0] = 'W';

    printf("%s %s\n", str, ptr);
    return 0;
}