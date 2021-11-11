#include <stdio.h>

int main(void) {
    int arr[5] = { 1,2,3,4,5 };
    int* ptr = arr;//int* ptr = &arr[0];

    while (ptr <= &arr[4]) {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}