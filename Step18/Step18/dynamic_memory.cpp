#include <iostream>
#include <cstdlib>

using namespace std;

int main(void) {
    //C언어의 동적할당
    //malloc 이용했을때 - 직접적으로 메모리 바이트 수를 계산해야됨
    int* arr1 = (int*)malloc(sizeof(int) * 10);
    free(arr1);

    //C++의 동적할당 - 변수 개수만 지정하면 됨
    int* arr2 = new int[10];
    delete[] arr2;//메모리 해제 ---> 동적할당한 배열을 해제할때

    //변수가 1개짜리 일때
    int* num = new int;
    delete num;

    return 0;
}