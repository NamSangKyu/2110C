#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr = &num1;

	printf("num1 : %d\n", num1);
	num1++;
	*ptr++; //ptr�� �����ϰ� �ִ� �ּҰ��� ������ ���� ����
	printf("num1 : %d\n", num1);

	ptr = &num2;
	printf("num2 : %d\n", num2);
	num2++;
	(*ptr)++;//()�ؾ� ����Ű�� ����� ���� ����
	printf("num2 : %d\n", num2);

	return 0;
}