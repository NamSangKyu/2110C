#include <stdio.h>

int main(void)
{
	int* iptr;
	double* dptr;
	char* str;
	float* fptr;

	printf("int * size : %d\n", sizeof(iptr));
	printf("float * size : %d\n", sizeof(fptr));
	printf("double * size : %d\n", sizeof(dptr));
	printf("char * size : %d\n", sizeof(str));
	return 0;
}