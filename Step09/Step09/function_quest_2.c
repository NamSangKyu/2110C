#include <stdio.h>
//������ �޾Ƽ� ���� ����� �����ϴ� �Լ� - calcGrade
char calcGrade(int score) {
    char grade = 'F';

    switch (score / 10) {
    case 10:
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    }
    return grade;
}
//���� �ϳ��� �޾Ƽ� �ش� ���ڰ� �Ҽ��� 1�� ����,
//�Ҽ��� �ƴϸ� 0�� �����Լ� - checkPrimeNumber
int checkPrimeNumber(int n) {
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(void) {
    printf("���� ��� : %c \n", calcGrade(76));
    int i;
    for (i = 1; i <= 100; i++) {
        if (checkPrimeNumber(i))
            printf("%d ", i);
    }
    return 0;
}