#include <stdio.h>
// ������ �ϳ� �Ű������� �޾Ƽ� �����̸� �����ϴ� �Լ�
double areaCircle(double r) {
    return r * r * 3.1415;
}
// ���� �ΰ��� �Ű������� �޾Ƽ� ū���� ����ϴ� �Լ�
void printMax(int n1, int n2) {
    if (n1 > n2)
        printf("�� ������ ū �� : %d\n", n1);
    else
        printf("�� ������ ū �� : %d\n", n2);
}
// ���ο��� ȣ���ؼ� �׽�Ʈ
int main(void) {
    double r = 4.2;
    printf("������ : %g\n", areaCircle(r));
    printMax(3, 2);
    printMax(1, 4);
    return 0;
}