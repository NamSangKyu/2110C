#include <stdio.h>
//���� O, �Ű����� O
int sum(int n1, int n2) {
    return n1 + n2;
}
//���� X, �Ű����� O - void ������ ���� ����
void print(int n) {
    printf("����� : %d\n",n);
}
//���� O, �Ű����� X
int inputNumber() {
    int n;
    scanf_s("%d", &n);
    return n;
}
//���� X, �Ű����� X
void printMessage() {
    printf("���� �Է� : ");
}

int main(void) {
    printMessage();
    int n1 = inputNumber();
    printMessage();
    int n2 = inputNumber();
    int result = sum(n1, n2);
    print(result);


    return 0;
}