#include <stdio.h>
/*
    ���ڸ� �Է� ����
    �Է� ���� ���� k
          
    k <= 2�� n�� �����ϴ� �ִ밪 n�� ���

    121�� �Է�
    2�� 7�� --> 128 

    ����� n���� 7


*/
int main(void) {
    int k, n, i=1;

    printf("���� �Է� : ");
    scanf_s("%d", &k);

    for (n = 0; k > i; n++) {
        i *= 2;
    }

    printf("n : %d\n", n);
  
    return 0;
}