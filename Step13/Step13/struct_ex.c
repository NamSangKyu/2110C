#include <stdio.h>
/*
    ����ü(struct)
        �ڵ�� ǥ���ؾߵǴ� ����� �����͸� �ϳ��� ��� ǥ���ϴ� ���
        �������� ������ ��� ���ο� ���� Ÿ���� ����

        ��ǥ��, �ּҷ�, �������, �л�����......
*/
struct Position {
    int xpos;
    int ypos;
};
//�ּҷ� - �̸�, ��ȭ��ȣ, ����
struct Address {
    char name[20];
    char tel[12];
    int age;
};
int main(void) {
    struct Position pos;
    struct Position p;
    pos.xpos = 10;//pos���� �ȿ� �ִ� ���� xpos�� ����
    pos.ypos = 20;//pos���� �ȿ� �ִ� ���� ypos�� ����

    p.xpos = 5;
    p.ypos = 6;
    printf("xpos : %d, ypos : %d\n", pos.xpos, pos.ypos);


    return 0;
}