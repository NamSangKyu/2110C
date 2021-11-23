// 01_strtok.c
#include <stdio.h>
#include <string.h>  // strtok_s()

int main() {

    char str[] = "hello,world,nice,to,meet,you";
    char* context = NULL;
    char* token;  // 분리한 문자열

    // 1번째 토큰 분리는 시작값(str, &str[0])을 전달해야 한다.
    token = strtok_s(str, ",", &context);  // 콤마(,) 기준 하나만 분리
    printf("%s\n", token);
    
    // 2번째 토큰 분리는 시작값을 전달할 필요가 없다.
    token = strtok_s(NULL, ",", &context);
    printf("%s\n", token);
    
    // 2번째 토큰 분리부터는 같은 코드를 사용한다. (반복문으로!)
    token = strtok_s(NULL, ",", &context);
    printf("%s\n", token);

    // 2번째 토큰 분리부터는 아래 코드를 사용하면 된다.
    while (token != NULL) {
        token = strtok_s(NULL, ",", &context);
        printf("%s\n", token);
    }

}