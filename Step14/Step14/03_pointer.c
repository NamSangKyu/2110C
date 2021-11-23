// 03_pointer.c
#include <stdio.h>
#include <string.h>

void ex1() {
    // 구조체 선언
    typedef struct {
        char sno[6];
        char name[20];
    } Student;
    // 구조체 변수 초기화
    Student s = { "12345", "홍길동" };
    // 구조체 포인터 변수를 만들어서
    // 구조체 변수 s를 가리킨다.
    Student* p = &s;
    /*
     variable     memory         address
              ---------------
     s  sno   |   "12345"   |    0x100
              ---------------
       name   |   "홍길동"   |
     ----------------------------------
     p        |   0x100     |
              ---------------
    */
   
    // *p 이것은 s와 같은 의미이다.
    printf("학번: %s\n", (*p).sno);
    // printf("학번: %s\n", *p.sno);   잘못된 사용
    // printf("학번: %s\n", *(p.sno)); 잘못된 사용

    // 메모리 참조 연산을 사용하지 않는 방법이 있다.
    // arrow(화살표) : ->
    printf("이름: %s\n", p->name);
}
void ex2() {
    // 구조체 Student
    typedef struct {
        char sno[6];
        char name[20];
    } Student;
    // 구조체 StudyRoom
    typedef struct {
        char roomName[20];
        Student* p;  // Student 변수의 주소를 저장
    } StudyRoom;
 
    // Student 변수
    Student s = { "12345", "alice" };

    // StudyRoom 변수
    StudyRoom room = { "개나리반", &s };

    // StudyRoom 정보 출력
    printf("룸 이름: %s\n", room.roomName);
    printf("학번: %s\n", room.p->sno);
    printf("이름: %s\n", room.p->name);
}
int main() {
    ex2();
}