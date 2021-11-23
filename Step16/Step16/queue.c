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
    //큐가 비어있는지 체크
    if (front == rear) {
        printf("큐가 비어있습니다.\n");
        return;
    }
    //데이터 뽑음
    printf("뽑은 데이터 : %d\n", queue[front]);
    queue[front] = -1;
    //front를 다음 위치로 이동
    front = (front + 1) % QUEUE_SIZE;
    PrintQueue();//전체출력
}
int main(void) {
    int no;
    while (1) {
        printf("1. 데이터 추가\n");
        printf("2. 데이터 읽기\n");
        printf("0. 프로그램 종료\n");
        printf("메뉴번호를 입력하세요 : ");
        scanf_s("%d", &no);
        if (no == 1) Enque();
        else if (no == 2) Deque();
        else break;
    }
    return 0;
}