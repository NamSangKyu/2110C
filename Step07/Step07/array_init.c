#include <stdio.h>
//�迭 �ʱ�ȭ ����
int main(void) {
    //       index- 0 1 2 3 4
    int arr1[5] = { 1,2,3,4,5 };
    //      index- 0 1 2 3 4 5 6
    int arr2[] = { 1,2,3,4,5,6,7 };//[] ������ ������ �ʱ�ȭ�ϴ� ���� ������ŭ �Ҵ�
    // �ʱ�ȭ�ϴ� ���� ������ ���ڸ��� �ڵ����� 0���� ä��, �ʱ�ȭ�� �ε��� 0���� ä��
    //      index - 0 1 2
    int arr3[5] = { 1,2,3 };
    int arr4[5] = { 0 };//�迭�� ��� ��Ҹ� 0���� �ʱ�ȭ


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
    for (i = 0; i < 5; i++)
        printf("%d ", arr3[i]);
    printf("\n");
    return 0;
}