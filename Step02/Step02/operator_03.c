#include <stdio.h>
/*
*   ����������
        ������ �ִ� ���� 1�� ����, ���� ������
        ++  --> ������ ���� 1 ����
        --  --> ������ ���� 1 ����

        n1++ --> ������ --> �ϴ� ++�� ���� ������ �����ϰ� ���ڿ� ����
        ++n1 --> ������ --> �ϴ� ++ ���� ���� ������ ���� ����
*/
int main(void) {
    int n1 = 10, n2 = 10;

    printf("%d\n", n1);
    printf("%d\n", n1++);
    printf("%d\n", n1);
    
    printf("%d\n", n2);
    printf("%d\n", ++n2);
    printf("%d\n", n2);

    int result, n3 = 10;
    
    result = n3++ * 2 + ++n3 / 3;
    printf("result : %d, n3 : %d\n", result,n3);
    return 0;
}