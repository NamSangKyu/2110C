#include <stdio.h>

int main(void) {
    int arr[5] = {0};//���δ� 0���� �ʱ�ȭ
    int i;
    //�迭 ���� ���ϴ� ���
    //                 ��ü ����Ʈ��/ ���� ����Ʈ�� 
    const int length = sizeof(arr) / sizeof(int);
    for (i = 0; i < length; i++) 
        arr[i] = (i + 1) * 10;
    
    for (i = 0; i < length; i++)
        printf("%d\n", arr[i]);

    return 0;
}