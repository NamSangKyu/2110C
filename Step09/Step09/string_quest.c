#include <stdio.h>
/*
    문자형 배열 길이가 50짜리로 선언
    문자열을 입력 받아서
    해당 글자 개수를 출력

    입력한 문자열을 뒤집어서 배열에 저장 후 출력
*/
int main(void) {
    char str[50];
    int idx = 0;
    int i;
    printf("문자열 입력 : ");
    scanf_s("%s", str, sizeof(str));

    while (str[idx] != '\0')//널 문자 : 숫자 0, '\0'
        idx++;

    printf("문자열 개수 : %d\n", idx);

    for (i = 0; i < idx / 2; i++) {
        char temp = str[i];
        str[i] = str[idx - 1 - i];
        str[idx - 1 - i] = temp;
    }

    printf("뒤집은 결과 : %s\n", str);

    return 0;
}