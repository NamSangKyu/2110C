#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node* next;
}Node;

typedef struct list {
    int size;//현재 노드 개수 ---> 데이터 개수
    Node* header;//시작 노드
}List;
//초기화
void Init(List* list) {

}
//노드 추가
void NodeAppend(List* list, int num) {

}
//노드 삭제
void NodeDelete(List* list, int num) {

}
//노드 검색
Node* NodeSearch(List* list, int num) {

}
//노드 데이터 수정
void NodeUpdate(List* list, int search_data, int update_data) {

}
//전체 노드 출력
void PrintAllNode(List* list) {
}
int main(void) {

    return 0;
}