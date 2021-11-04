#include <stdio.h>
//리턴 O, 매개변수 O
int sum(int n1, int n2) {
    return n1 + n2;
}
//리턴 X, 매개변수 O - void 리턴할 값이 없다
void print(int n) {
    printf("결과값 : %d\n",n);
}
//리턴 O, 매개변수 X
int inputNumber() {
    int n;
    scanf_s("%d", &n);
    return n;
}
//리턴 X, 매개변수 X
void printMessage() {
    printf("숫자 입력 : ");
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