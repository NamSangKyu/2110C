#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node* next;
}Node;

typedef struct list {
    int size;//���� ��� ���� ---> ������ ����
    Node* header;//���� ���
}List;
//�ʱ�ȭ
void Init(List* list) {
    list->size = 0;
    list->header = NULL;
}
//��� �߰�
void NodeAppend(List* list, int num) {
    //��� ����, ������ ����
    Node* node = (Node*)malloc(sizeof(Node));
    node->val = num;
    node->next = NULL;
    Node* ptr = list->header;
    if (ptr == NULL) {//����Ʈ�� ��尡 �ϳ��� ���� ���
        list->header = node;
        list->size++;
    }
    //������ ��� Ž��
    while (1) {
        if (ptr->next == NULL) {
            //������ ��� ����
            ptr->next = node;
            list->size++;
            break;
        }
        ptr = ptr->next;
    }
}
//��� ����
void NodeDelete(List* list, int num) {

}
//��� �˻�
Node* NodeSearch(List* list, int num) {

}
//��� ������ ����
void NodeUpdate(List* list, int search_data, int update_data) {

}
//��ü ��� ���
void PrintAllNode(List* list) {
    //ptr�� NULL ���ö����� �̵�
    Node* ptr = list->header;
    if (list->size == 0) {
        printf("����Ʈ�� ����� ������ �����ϴ�\n");
        return;
    }
    while (ptr != NULL) {
        //�̵� �Ҷ����� ptr->val�� ���
        printf("%d->", ptr->val);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
int main(void) {
    //1. ��� �߰�
    //5. ��ü ��� ���
    //0. ���α׷� ����
    return 0;
}