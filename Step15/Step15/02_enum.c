// 02_enum.c
#include <stdio.h>

void ex1() {
    // 열거형
    // 동시에 많은 상수(const)를 만듬.

    // 열거형 정의
    enum command {
        CREATE,  // 정수 0을 가짐, 초기화를 가지면 초기화 값부터 1씩 할당.
        READ,    // 정수 1을 가짐
        UPDATE,  // 정수 2를 가짐
        DELETE   // 정수 3을 가짐
    };

    // 열거형 변수 선언
    // 타입 : enum command
    // 변수 : c
    enum command c;

    // 열거형 변수는 열거형 값을 저장함
    c = CREATE;

    // 변수 c는 CREATE(정수 0)을 가짐
    printf("%d\n", c);

}
void ex2() {

    // enum + typedef

    typedef enum command {
        CREATE = 1,  // 정수 1
        READ,        // 정수 2
        UPDATE,      // 정수 3
        DELETE       // 정수 4
    } Command;  // 새로 정의한 타입 : Command

    // 사용자로부터 명령을 1~4로 입력 받아서 관련 명령을 처리하는 구조

    // 열거형 변수
    Command c;

    c = CREATE;  // c = 1;

    if (c == CREATE) { // if (c == 1)
        printf("create 작업\n");
    }
    else if (c == READ) {
        printf("read 작업\n");
    }
    else if (c == UPDATE) {
        printf("update 작업\n");
    }
    else if (c == DELETE) {
        printf("delete 작업\n");
    }

}

#define TRUE 1
#define FALSE 0
void ex3() {
    
    typedef enum _command {
        EXIT = 0,
        CREATE = 1,
        READ = 2,
        UPDATE = 3,
        DELETE = 4
    } Command;

    Command cmd;

    // 무한루프
    while (TRUE) {
        
        printf("1:CREATE, 2:READ, 3:UPDATE, 4:DELETE, 0:EXIT >>> ");
        scanf_s("%d", &cmd);

        switch (cmd) {
        case CREATE:
            printf("create 작업\n");
            break;
        case READ:
            printf("read 작업\n");
            break;
        case UPDATE:
            printf("update 작업\n");
            break;
        case DELETE:
            printf("delete 작업\n");
            break;
        case EXIT:
            printf("종료\n");
            return;  // 함수 종료하기(무한루프 빠져 나오기)
        }

    }

}
int main() {
    ex3();
}