#include <stdio.h>
//�Ű������� ���ڸ� �ϳ� �޾Ƽ� �ش� ������ ���丮�� ���� ���ϴ� �Լ�
//5 -> 1 * 2 * 3 * 4 * 5 --> 120
int fac(int n) {
    if (n == 1)
        return 1;
    return n * fac(n - 1);
}
//return 5 * [return 4 * [return 3 * [return 2 * [return 1]]]]
//return 5 * [return 4 * [return 3 * [return 2 * 1]]]
//return 5 * [return 4 * [return 3 * 2]]
//return 5 * [return 4 * 6]
//return 5 * 24
//return 120
int main(void) {
    printf("%d! = %d\n",5, fac(5));
    printf("%d! = %d\n",6, fac(6));
    printf("%d! = %d\n",7, fac(7));
    return 0;
}