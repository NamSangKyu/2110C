#include <stdio.h>
//�迭 �ʱ�ȭ ����
int main(void) {
    //       index- 0 1 2 3 4
    int arr1[5] = { 1,2,3,4,5 };
    //      index- 0 1 2 3 4 5 6
    int arr2[] = { 1,2,3,4,5,6,7 };//[] ������ ������ �ʱ�ȭ�ϴ� ���� ������ŭ �Ҵ�
    int arr3[5] = { 1,2,3 };


    int i;
    //arr1 ���
    for (i = 0; i < 5; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    //arr2 ���
    for (i = 0; i < 7; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    //arr3 ���

    return 0;
}