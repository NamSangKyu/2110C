#include <stdio.h>

int main(void) {
    int arr[5] = {0};//전부다 0으로 초기화
    int i;
    //배열 개수 구하는 방법
    //                 전체 바이트수/ 개당 바이트수 
    const int length = sizeof(arr) / sizeof(int);
    for (i = 0; i < length; i++) 
        arr[i] = (i + 1) * 10;
    
    for (i = 0; i < length; i++)
        printf("%d\n", arr[i]);

    return 0;
}