#include <stdio.h>
int main(void) {
    //float - 4 byte - %f, double - 8 byte - %lf
    double pi = 3.1415;
    printf("pi : %.3lf\n", pi);//�ڸ����� ���ڸ��� �ݿø�
    //�������� 3�� ������ ���
    printf("�������� 3�� ������ : %lf\n", 3 * 3 * pi);

    //���� �ڵ带 float Ÿ���� ������ �����ؼ� �����ϰ� ó��
    float pi2 = 3.1415f;
    printf("pi2 : %lf\n", pi2);
    printf("�������� 3�� ������ : %lf\n", 3 * 3 * pi2);
    return 0;
}