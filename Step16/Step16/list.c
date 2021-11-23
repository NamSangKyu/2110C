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
    list->size = 0;
    list->header = NULL;
}
//노드 추가
void NodeAppend(List* list, int num) {
    //노드 생성, 데이터 셋팅
    Node* node = (Node*)malloc(sizeof(Node));
    node->val = num;
    node->next = NULL;
    Node* ptr = list->header;
    if (ptr == NULL) {//리스트에 노드가 하나도 없는 경우
        list->header = node;
        list->size++;
    }
    //마지막 노드 탐색
    while (1) {
        if (ptr->next == NULL) {
            //생성한 노드 연결
            ptr->next = node;
            list->size++;
            break;
        }
        ptr = ptr->next;
    }
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
    //ptr이 NULL 나올때까지 이동
    Node* ptr = list->header;
    if (list->size == 0) {
        printf("리스트에 저장된 내용이 없습니다\n");
        return;
    }
    while (ptr != NULL) {
        //이동 할때마다 ptr->val을 출력
        printf("%d->", ptr->val);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
int main(void) {
    //1. 노드 추가
    //5. 전체 노드 출력
    //0. 프로그램 종료
    return 0;
}