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

}
//��� �߰�
void NodeAppend(List* list, int num) {

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
}
int main(void) {

    return 0;
}