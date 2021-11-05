#include <stdio.h>
void PrintArray(int ptr[], int length) {
	int i;
	for (i = 0; i < length; i++)
		printf("%d ", ptr[i]);
	printf("\n");
}
int main(void) {
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	int arr3[10] = { 1,2,3,4 };

	PrintArray(arr1, sizeof(arr1) / sizeof(int));
	PrintArray(arr2, sizeof(arr2) / sizeof(int));
	PrintArray(arr3, sizeof(arr3) / sizeof(int));

	return 0;
}