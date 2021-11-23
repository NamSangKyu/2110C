#include <stdio.h>
const int QUEUE_SIZE = 5;
int queue[5];
int front, rear;

//ť�� ����� ������ ���� ���
void PrintQueue() {
    int i;
    for (i = 0; i < QUEUE_SIZE; i++)
        printf("%d ", queue[i]);
    printf("front : %d, rear : %d\n",front,rear);
}
//ť�� �����͸� �Է� �޾Ƽ� ����
void Enque() {
    //ť�� ����� ������ �ִ��� üũ
    if ((rear + 1) % QUEUE_SIZE == front) {
        printf("���̻� ������ ������ �����ϴ�.\n");
        return;
    }
    printf("������ ���� �Է� : "); scanf_s("%d", &queue[rear]);
    //������ ���� ��ġ (rear + 1) % QUEUE_SIZE ���� ��ġ
    rear = (rear + 1) % QUEUE_SIZE;
    //ť�� ����� ������ ���� ���
    PrintQueue();
}
//ť�� ����� �����͸� ����
void Deque() {
    //ť�� ����ִ��� üũ
    if (front == rear) {
        printf("ť�� ����ֽ��ϴ�.\n");
        return;
    }
    //������ ����
    printf("���� ������ : %d\n", queue[front]);
    queue[front] = -1;
    //front�� ���� ��ġ�� �̵�
    front = (front + 1) % QUEUE_SIZE;
    PrintQueue();//��ü���
}
int main(void) {
    int no;
    while (1) {
        printf("1. ������ �߰�\n");
        printf("2. ������ �б�\n");
        printf("0. ���α׷� ����\n");
        printf("�޴���ȣ�� �Է��ϼ��� : ");
        scanf_s("%d", &no);
        if (no == 1) Enque();
        else if (no == 2) Deque();
        else break;
    }
    return 0;
}