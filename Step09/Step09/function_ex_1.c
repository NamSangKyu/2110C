#include <stdio.h>
/*
    �Լ�(function)
        ����� �κ��� ���� �ڵ�� �ۼ��ؼ�
        �ʿ��Ҷ����� �ҷ��� ���
    �� �Լ� �ۼ��� ���� ���� : �Լ��ϳ��� ��� 1���� ���

    ����Ÿ�� �Լ���(�Ű�����){
        ���๮
        return �����;
    }
    ����Ÿ�� : �Լ��� ������� ������ Ÿ��
    �Լ��� : ��ɽ����� �ϱ����� ȣ���
    �Ű����� : �ش� �Լ��� �����ϱ� ���� �ʿ��� �����͸� �޴� ����
              �Լ� ȣ��� �ݵ�� �Ű����� ���� ��� �����͸� ��������
    return : ������� �ǵ����ִ� Ű����
             return �����ʿ� �ִ� ���� �����
*/
int sum(int n1, int n2) {
    int result = 0;
    result = n1 + n2;
    return result;
}
int main(void) {
    int result;

    result = sum(10, 20);
    printf("sum : %d\n", result);
    result = sum(4, 7);
    printf("sum : %d\n", result);

    return 0;
}