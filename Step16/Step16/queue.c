#include <stdio.h>
const int QUEUE_SIZE = 5;
int queue[5];
int front, rear;

//큐에 저장된 내용을 전부 출력
void PrintQueue() {
    int i;
    for (i = 0; i < QUEUE_SIZE; i++)
        printf("%d ", queue[i]);
    printf("front : %d, rear : %d\n",front,rear);
}
//큐에 데이터를 입력 받아서 저장
void Enque() {
    //큐에 저장될 공간이 있는지 체크
    if ((rear + 1) % QUEUE_SIZE == front) {
        printf("더이상 저장할 공간이 없습니다.\n");
        return;
    }
    printf("저장할 숫자 입력 : "); scanf_s("%d", &queue[rear]);
    //저장할 다음 위치 (rear + 1) % QUEUE_SIZE 다음 위치
    rear = (rear + 1) % QUEUE_SIZE;
    //큐에 저장된 내용을 전부 출력
    PrintQueue();
}
//큐에 저장된 데이터를 뽑음
void Deque() {
}
int main(void) {
    return 0;
}