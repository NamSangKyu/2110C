#include <stdio.h>
/*
*  ����ȯ(Casting)
*       1. ������ ����ȯ : ����ڰ� ���Ҷ� ������ Ÿ���� �����Ҷ�
*       2. �ڵ����� ����ȯ : ���Ŀ� ���ؼ� ���� Ÿ���� �ڵ����� ����
*/
int main(void) {
    //1. ������ ����ȯ
    double result1 = (double)10 / 3;
    printf("result1 : %lf\n", result1);
    //2. �ڵ� ����ȯ
    double result2 = 10 / 3.0;
    printf("result2 : %lf\n", result1);
    return 0;
}