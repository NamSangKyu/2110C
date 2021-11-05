#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr = &num1;

	printf("num1 : %d\n", num1);
	num1++;
	*ptr++; //ptr이 저장하고 있는 주소값이 증감이 먼저 실행
	printf("num1 : %d\n", num1);

	ptr = &num2;
	printf("num2 : %d\n", num2);
	num2++;
	(*ptr)++;//()해야 가리키는 대상의 값을 증가
	printf("num2 : %d\n", num2);

	return 0;
}