#include <stdio.h>
//문자열 : 문자가 1개 이상인 문자들의 모음
//         문자열은 ""로 묶어서 나타냄
int main(void) {
    char str[] = "Hello World";
    char han[] = "안녕하세요";//한글은 2byte
    //문자열 출력시 해당 주소부터 
    //문자들을 일괄적으로 하나씩 읽어서 출력
    //문자열 마지막을 나타내기 위해서 맨 마지막에 널문자가 들어감
    printf("str : %s\n", str);
    printf("str : %d\n", str);
    printf("null : %c , %d\n", str[11], str[11]);
    printf("sizeof str : %d\n", sizeof(str));

    printf("han : %s\n", han);
    printf("sizeof han : %d\n", sizeof(han));


    return 0;
}