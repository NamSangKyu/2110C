#include <stdio.h>
int main(void) {
    /*
    *    ���� a�� ���� 10�� ����
    *    ���� a�� 5���� ũ�� 10���� ������ üũ�ؼ� ��� ���
    */
    int a = 10;
    printf("%d\n", 5 < a < 10);//������ 2�� �̻��ϋ��� ���� X
    /*
    *   �������� 
    *       AND  :   &&    ---> ������ ������ ��� true�ϋ� true
    *       OR   :   ||    ---> ������ ������ �ϳ��� true�� true
    *       NOT  :   !     ---> true�� false, false�� true ������ ������
    */ 
    printf("%d\n", a > 5 && a < 10);
    printf("%d\n", a < 5 || a > 7);
    printf("%d\n", !(a > 5));
    printf("%d\n", !a);

    return 0;
}