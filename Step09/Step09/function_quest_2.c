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


int main(void) {

    return 0;
}