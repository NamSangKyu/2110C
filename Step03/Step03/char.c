#include <stdio.h>
/*
* 문자형 변수 타입 : char - 1 byte - %c
*   알파벳 대소문자, 숫자, 특수문자 --> 글자 하나만 저장
*   한글이나 기타 언어들은 안됨 메모리가 부족
*/
int main(void) {
    char ch1 = 'A';//문자는 ''로 묶음
    int ch2 = 66;
    printf("%c %d\n", ch1, ch1);
    printf("%c %d\n", ch2, ch2);

    char ch3 = 'a';
    printf("%c %d\n", ch3, ch3);


 
    return 0;
}