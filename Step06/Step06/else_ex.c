#include <stdio.h>
int main(void) {

    int n;

    printf("���� �Է� : ");
    scanf_s("%d", &n);

    if (n % 2 == 0) {
        printf("�Է��Ͻ� ���ڴ� ¦�� �Դϴ�\n");
    } 
     else {
        printf("�Է��Ͻ� ���ڴ� Ȧ�� �Դϴ�\n");
    }
    return 0;
}