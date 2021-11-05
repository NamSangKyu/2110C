#include <stdio.h>
/*
    static ����
        �Լ��� �������� ��� �����ؾߵǴ� ���� ������
        static���� ���� �����ϸ� stack�� �ƴ϶� ������ ������ �޸� �Ҵ�
*/

int sum(int a, int b) {
    //stack�� �ƴ϶� ������ ������ �Ҵ�, �Լ��� ������ ������� ����
    static int count = 0; //���� �ѹ��� �����
    count++;
    printf("count : %d\n",count);
    return a + b;
}

int main(void) {
    sum(10, 2);
    sum(1, 3);
    sum(5, 4);
    sum(70, 56);

    return 0;
}