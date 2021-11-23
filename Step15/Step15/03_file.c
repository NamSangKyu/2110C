// 03_file.c

// _s 함수들을 사용하지 않더라도 오류 발생 방지
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// FILE 포인터 : 파일을 읽거나, 만들 수 있다.

void ex1() {

    // fopen() 함수 : FILE 포인터 만드는 함수
    
    // t1.txt 파일을 w 모드로 연다. (write)
    // t1.txt 파일을 만든다.
    FILE* fp = fopen("t1.txt", "w");

    // FILE 포인터 생성 확인
    if (fp == NULL) {
        printf("파일 포인터 생성 실패\n");
        return;  // 함수 종료
    }

    // FILE 포인터 닫기
    fclose(fp);

}
void ex2() {

    // fopen_s() 함수 : FILE 포인터를 만드는 함수

    FILE* fp;
    errno_t err = fopen_s(&fp, "t2.txt", "w");

    // FILE 포인터 생성 확인
    // errno_t 타입은 실제로 정수를 의미함.
    // FILE 포인터가 생성되면 0을 반환함.
    if (err != 0) {
        printf("파일 포인터 생성 실패\n");
        return;  // 함수 종료
    }

    // FILE 포인터 닫기
    fclose(fp);

}
void ex3() {

    FILE* fp = fopen("t3.txt", "w");  // w 모드는 언제나 새로 만듬.

    if (fp == NULL) {
        printf("파일 포인터 생성 실패\n");
        return;
    }

    // fputc() 함수
    // 1. 파일로 1글자를 보낸다.
    // 2. 1글자는 char가 아닌 "int"에 저장해야 한다.

    int a = 'H';
    int b = 'e';
    int c = 'l';
    int d = 'l';
    int e = 'o';

    int arr[5] = {'W', 'o', 'r', 'l', 'd'};

    fputc(a, fp);
    fputc(b, fp);
    fputc(c, fp);
    fputc(d, fp);
    fputc(e, fp);

    for (int i = 0; i < 5; i++) {
        fputc(arr[i], fp);
    }

    fclose(fp);

}
void ex4() {

    FILE* fp = fopen("t4.txt", "w");

    if (fp == NULL) {
        // stderr : FILE* 타입의 파일 에러 스트림. 에러 메시지 작성할 때 사용함.
        fprintf(stderr, "파일 포인터 생성 실패\n");
        return;
    }

    // fputs() 함수
    // 1. 문자열을 파일로 보낸다.
    // 2. char 배열, char* 포인터 값을 보낸다.
    char arr[] = "hello";
    char* str = "world";

    fputs(arr, fp);
    fputs(str, fp);

    fclose(fp);

}
void ex5() {

    typedef struct _student {
        char name[20];  // 이름
        int mid;        // 중간
        int final;      // 기말
        double ave;     // 평균
    } Student;

    FILE* fp = fopen("성적표.txt", "w");

    if (fp == NULL) {
        fprintf(stderr, "파일 포인터 생성 실패\n");
        return;
    }

    // Student 타입 배열 선언
    Student students[3];

    // 반복해서 3명 정보 입력 받기
    for (int i = 0; i < 3; i++) {
        printf("이름 >>> ");
        scanf("%s", students[i].name);  // 배열이므로 & 없음.
        printf("중간점수 >>> ");
        scanf("%d", &students[i].mid);  // 변수이므로 & 필요함.
        printf("기말점수 >>> ");
        scanf("%d", &students[i].final);
        students[i].ave = (students[i].mid + students[i].final) * 0.5;
    }

    // 성적표.txt 파일을 생성하자.
    // 구조는 csv 형식으로(콤마로 구분)
    for (int i = 0; i < 3; i++) {
        fprintf(fp, "%s,%d,%d,%.1f\n", students[i].name
            , students[i].mid
            , students[i].final
            , students[i].ave);
    }

    fclose(fp);

}
void ex6() {

    // w 모드 : 언제나 새로 만든다.
    
    // a 모드 : append 모드(추가 모드)
    // 새로 만들거나(파일이 없을 때), 내용을 추가한다.(파일이 있을 때)

    FILE* fp = fopen("t6.txt", "a");  // 1번째 실행은 t6.txt 파일이 없기 때문에 새로 만듬.
                                      // 2번째 실행부터는 t6.txt 파일이 있기 때문에 기존 내용에 추가됨.

    if (fp == NULL) {
        fprintf(stderr, "파일 포인터 생성 실패\n");
        return;
    }

    fprintf(fp, "Hello World");

    fclose(fp);

}
int main() {
    ex6();
}