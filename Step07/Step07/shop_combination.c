#include <stdio.h>
/*
    �ݾ�(������)�� �Է� ���� - �ݾ��� 100�� ������ �Է� �ϼ���
    �Է��� �ݾ׿� �°� ��ǰ�� �����ϴ� ���ս��� ���
    ��ǰ�� �� �ݵ�� 1������ ��ߵ�

    ���� : 1500��
    ���� : 1000��
    �ﰢ��� : 1400��

    ���� 1 , ���� 2, �ﰢ��� 3
    ...
    ...
*/
int main(void) {
    int money;
    int snack, drink, gimbab;
    printf("�ݾ� �Է� : ");
    scanf_s("%d", &money);

    for (snack = 1; snack < money / 1500; snack++) {
        for (drink = 1; drink < money / 1000; drink++) {
            for (gimbab = 1; gimbab < money / 1400; gimbab++) {
                if (snack * 1500 + drink * 1000 + gimbab * 1400 == money) {
                    printf("���� %d, ���� %d, �ﰢ��� %d\n", snack, drink, gimbab);
                }
            }
        }
    }

    return 0;
}