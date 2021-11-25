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
        return;
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
//��� �˻� - �˻��� �����Ͱ� num
Node* NodeSearch(List* list, int num) {
    if (list->size == 0) {
        return NULL;
    }
    Node* ptr = list->header;
    while (ptr != NULL) {
        //�Ź� ��尡 ������ �ִ� ���� num�� �������� üũ
        if (ptr->val == num) {
            return ptr;
        }
        //������ ������ �̵�
        ptr = ptr->next;
    }
    return NULL;
}
//��� ������ ���� - search_data �˻��� ������, update_data ������ ������
void NodeUpdate(List* list, int search_data, int update_data) {
    //��� �˻� �Լ��� �̿�
    Node* result = NodeSearch(list, search_data);
    if (result != NULL) {
        result->val = update_data;
        printf("������ ������ �Ϸ� �Ǿ����ϴ�.\n");
    }
    else {
        printf("�ش� �����͸� ������ �ִ� ��尡 �����ϴ�.\n");
    }
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
    int no=-1;
    List list;
    Init(&list);

    while (no != 0) {
        printf("1. ��� �߰�\n");
        printf("2. ��� ����\n");
        printf("3. ��� �˻�\n");
        printf("5. ��ü ��� ���\n");
        printf("0. ���α׷� ����\n");
        printf("���Ͻô� �޴� ��ȣ �Է� : ");
        scanf_s("%d", &no);
        switch (no) {
        case 1:
            printf("�߰��� ������ : ");
            scanf_s("%d", &no);
            NodeAppend(&list,no);
            break;
        case 2:
            printf("�˻��� ������ : ");
            scanf_s("%d", &no);
            int temp;
            printf("������ ������ : ");
            scanf_s("%d", &temp);
            NodeUpdate(&list, no, temp);
            break;
        case 3:
            printf("�˻��� ������ : ");
            scanf_s("%d", &no);
            Node* ptr = NodeSearch(&list,no);
            if (ptr != NULL)
                printf("�˻� ���� : %d,%p\n", ptr->val, ptr);
            else
                printf("�˻��� ������ ����� �����ϴ�.\n");
            break;
        case 5:
            PrintAllNode(&list);
            break;
        }
    }
    return 0;
}