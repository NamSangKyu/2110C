#include <iostream>

using namespace std;

int main(void) {
    //동적할당으로 정수형 배열 5개짜리를 만들고 숫자를 전부 입력
    //입력한 숫자를 전부 출력
    int* arr = new int[5];
    for (int i = 0; i < 5; i++) {
        cout << "숫자 입력 : ";
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    delete[] arr;
    return 0;
}