// 04_string.c
/*
*   #include <string.h> 
*   1. strlen() : 문자열 길이
*   2. strcpy() : 문자열 복사
*   3. strcat() : 문자열 연결
*   4. strcmp() : 문자열 비교
*   5. strtok() : 문자열 분리
*/
#include <stdio.h>
#include <string.h>

void ex1() {
    char s1[10] = "hello";
    char* s2 = "world";
    printf("배열 크기 : %d\n", sizeof(s1));
    printf("문자열 길이 : %d\n", strlen(s1));
    // 포인터 크기
    // 1. 운영체제 bit : 64bit
    // 2. 컴파일러 bit : 32bit
    // 둘 중 작은 값 32bit(4byte)을 크기로 가짐.
    printf("포인터 크기 : %d\n", sizeof(s2));
    printf("문자열 길이 : %d\n", strlen(s2));
}
void ex2() {
    char src[10] = "hello";
    char des[10];

    // 배열 이름은 주소 값이기 때문에 아래 코드는 주소 덮어쓰기로 진행된다.
    // des = src;

    // strcpy(des, src)
    // strcpy_s(des, sizeof(des), src)
    strcpy_s(des, sizeof(des), src);
    printf("%s\n", des);
}
void ex3() {
    char s1[10] = "hello";
    char s2[5] = "jack";
    // strcat(s1, s2) : s1 뒤에 s2를 연결한다.
    //                  s1이 길어지므로 충분한 공간이 있어야 한다.
    // strcat_s(s1, sizeof(s1), s2)
    strcat_s(s1, sizeof(s1), s2);  // s1 : "hellojack"
    printf("s1: %s\n", s1);  // hellojack
    printf("s2: %s\n", s2);  // jack
}

// C는 true(1), false(0)가 없으므로 정의해서 사용한다.
#define FALSE 0
#define TRUE 1

void ex4() {
    char s1[10] = "hello";
    char s2[20] = "hello";
    // strcmp(s1, s2) : 같은 문자열은 0이 반환됨, 다르면 -1 또는 1이 반환됨.
    if (strcmp(s1, s2) == FALSE) {
        printf("같은 문자열\n");
    }
    else {
        printf("다른 문자열\n");
    }
    // strcmp(s1, s2) == 0  :  0은 false를 의미함.
    // !strcmp(s1, s2)      :  !(not) 연산으로 같은 문자열이면 true를 반환.
    if ( !strcmp(s1, s2) ) {
        printf("같은 문자열\n");
    }
    else {
        printf("다른 문자열\n");
    }
    
}
int main() {
    ex4();
}
