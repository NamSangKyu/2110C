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
}
int main(void) {
    return 0;
}