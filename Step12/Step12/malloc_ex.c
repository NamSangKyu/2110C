#include <stdio.h>
#include <stdlib.h>
/*
*   동적 할당
*       프로그램 실행 중에 필요한 만큼 메모리를 할당
*       Heap 영역을 사용함
*/
int main(void) {
    int* arr;
    int i, size = 10;
    //malloc(숫자) 숫자만큼 byte단위로 메모리를 할당
    arr = (int *)malloc(sizeof(int) * size);

    for (i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);//할당한 메모리를 해제
    return 0;
}