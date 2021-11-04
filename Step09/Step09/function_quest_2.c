#include <stdio.h>
//점수를 받아서 성적 등급을 리턴하는 함수 - calcGrade
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
//숫자 하나를 받아서 해당 숫자가 소수면 1을 리턴,
//소수가 아니면 0을 리턴함수 - checkPrimeNumber
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
    printf("성적 등급 : %c \n", calcGrade(76));
    int i;
    for (i = 1; i <= 100; i++) {
        if (checkPrimeNumber(i))
            printf("%d ", i);
    }
    return 0;
}