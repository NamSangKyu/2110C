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
        return;
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
//노드 검색 - 검색할 데이터가 num
Node* NodeSearch(List* list, int num) {
    if (list->size == 0) {
        return NULL;
    }
    Node* ptr = list->header;
    while (ptr != NULL) {
        //매번 노드가 가지고 있는 값이 num과 동일한지 체크
        if (ptr->val == num) {
            return ptr;
        }
        //마지막 노드까지 이동
        ptr = ptr->next;
    }
    return NULL;
}
//노드 데이터 수정 - search_data 검색할 데이터, update_data 수정할 데이터
void NodeUpdate(List* list, int search_data, int update_data) {
    //노드 검색 함수를 이용
    Node* result = NodeSearch(list, search_data);
    if (result != NULL) {
        result->val = update_data;
        printf("데이터 수정이 완료 되었습니다.\n");
    }
    else {
        printf("해당 데이터를 가지고 있는 노드가 없습니다.\n");
    }
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
    int no=-1;
    List list;
    Init(&list);

    while (no != 0) {
        printf("1. 노드 추가\n");
        printf("2. 노드 수정\n");
        printf("3. 노드 검색\n");
        printf("5. 전체 노드 출력\n");
        printf("0. 프로그램 종료\n");
        printf("원하시는 메뉴 번호 입력 : ");
        scanf_s("%d", &no);
        switch (no) {
        case 1:
            printf("추가할 데이터 : ");
            scanf_s("%d", &no);
            NodeAppend(&list,no);
            break;
        case 2:
            printf("검색할 데이터 : ");
            scanf_s("%d", &no);
            int temp;
            printf("수정할 데이터 : ");
            scanf_s("%d", &temp);
            NodeUpdate(&list, no, temp);
            break;
        case 3:
            printf("검색할 데이터 : ");
            scanf_s("%d", &no);
            Node* ptr = NodeSearch(&list,no);
            if (ptr != NULL)
                printf("검색 성공 : %d,%p\n", ptr->val, ptr);
            else
                printf("검색한 데이터 결과가 없습니다.\n");
            break;
        case 5:
            PrintAllNode(&list);
            break;
        }
    }
    return 0;
}