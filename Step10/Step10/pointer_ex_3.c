#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[0];//int* ptr = &arr[0];

	int i;
	for (i = 0; i < 5; i++)
		printf("%d ", ptr[i]);
	printf("\n");
	return 0;
}