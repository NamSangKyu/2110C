#include <stdio.h>
/*
*   break : break�� ���� ���ΰ� �ִ� �ݺ��� �ϳ��� ������ ����
* 
*   continue : �ݺ������� ���� ���� �����ϰ� ���� �ݺ� ȸ���� �Ѿ
*/
int main(void) {
    int i = 1, result = 0;

    while (1) {
        result += i;
        i++;
        if (result >= 5050) {
            break;
        }
    }

    printf("result : %d\n", result);

    for (i = 1; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}