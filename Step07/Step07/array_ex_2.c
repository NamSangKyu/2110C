#include <stdio.h>

int main(void) {
    //������ �迭 ũ�Ⱑ 5���� �迭 ����
    int arr[5];
    int i;
    //�迭�� ������� 1~5���� ����
    for (i = 0; i < 5; i++)
        arr[i] = i + 1;

    //�迭�� ������ ���� ���
    for (i = 0; i < 5; i++)
        printf("%d\n", arr[i]);

    return 0;
}