#include <stdio.h>

int main(void) {
    /*
    *   double�� ���� �ϳ� ���� ��
        �Ǽ� �ϳ� �Է��� �޾Ƽ�
        �ش� �Ǽ��� �����̸� ���
    */
    double r, area;
    const double PI = 3.1415;//��� - �ٲ��� �ʴ� ��
    
    printf("������ �ϳ� �Է� : ");
    scanf("%lf", &r);

    area = r * r * PI;

    printf("������ : %g\n", area);

    return 0;
}