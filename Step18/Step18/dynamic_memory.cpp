#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    //C����� �����Ҵ�
    //malloc �̿������� - ���������� �޸� ����Ʈ ���� ����ؾߵ�
    int* arr1 = (int*)malloc(sizeof(int) * 10);
    free(arr1);

    //C++�� �����Ҵ� - ���� ������ �����ϸ� ��
    int* arr2 = new int[10];
    delete[] arr2;//�޸� ���� ---> �����Ҵ��� �迭�� �����Ҷ�

    //������ 1��¥�� �϶�
    int* num = new int;
    delete num;

    return 0;
}