#include <stdio.h>
#include <stdlib.h>
/*
*   ���� �Ҵ�
*       ���α׷� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ�
*       Heap ������ �����
*/
int main(void) {
    int* arr;
    int i, size = 10;
    //malloc(����) ���ڸ�ŭ byte������ �޸𸮸� �Ҵ�
    arr = (int *)malloc(sizeof(int) * size);

    for (i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);//�Ҵ��� �޸𸮸� ����
    return 0;
}