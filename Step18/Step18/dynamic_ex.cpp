#include <iostream>

using namespace std;

int main(void) {
    //�����Ҵ����� ������ �迭 5��¥���� ����� ���ڸ� ���� �Է�
    //�Է��� ���ڸ� ���� ���
    int* arr = new int[5];
    for (int i = 0; i < 5; i++) {
        cout << "���� �Է� : ";
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    delete[] arr;
    return 0;
}