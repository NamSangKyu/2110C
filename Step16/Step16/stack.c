#include <stdio.h>
#include <stdlib.h>

//스택 - 동적할당
int* stack;
//스택에 저장할 수 있는 최대 개수
int max;
//데이터를 추가할 위치 - TOP
int top;

void Init() {
    //스택 개수를 입력 받음
    int size;
    //입력받은 개수만큼 동적할당
    printf("스택 개수 입력 : ");
    scanf_s("%d", &size);
    stack = (int*)malloc(sizeof(int) * size);
    //최대개수 저장
    max = size;
    //TOP 초기화
    top = 0;
}
//데이터 추가, n - 추가할 데이터
int Push(int n) {
    //저장할 공간이 있는지 체크
    //  저장할 공간이 없으면 0 리턴
    //데이터 추가
    //TOP 증가
    //데이터 추가가 정상적으로 되면 1리턴
}
//데이터 읽기
int Pop() {
    //저장된 데이터가 있는지 체크
    //  저장된 데이터가 없으면 -1 리턴
    //데이터를 리턴 TOP을 감소
}
int main(void) {
    /*
    *   프로그램 제어
    *   1. push
    *   2. pop
    *   3. exit
    *   input meno no : 
    *   
    */

}


