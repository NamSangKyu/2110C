#include <stdio.h>
/*
    ��� �Լ�
        �Լ��� �ڱ� �ڽ��� �� ȣ���ϴ� �Լ�
*/
//��� �Լ� ������ �Ǵ� �κ� -- ������ ���� �Ǵºκ��� ����
void PrintMessage() {
    printf("PrintMessage\n");
    PrintMessage();//�ڱ� �ڽ��� ȣ��
}
//����Լ��� ������ ������� �ʰ� �ѹ��� ȣ���� ���ϴ� �ڵ� ����
void PrintCount(int count) {
    printf("count : %d\n", count);
    count--;
    if(count > 0)
        PrintCount(count);
    printf("�Լ� ���� - %d\n", count);
}
int main(void) {
    //PrintMessage();
    PrintCount(5);
    printf("���α׷� ����\n");
    return 0;
}