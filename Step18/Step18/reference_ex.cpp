#include <iostream>
using namespace std;
/*
*   ������ : ������ �����ϸ� �޸� ������ �������� �ϳ� �پ�����,
*            �� ������ �ٸ� �������� �� �ٿ��� ����� �����ϰ� �ϴ� ���� ������(���� ����)
*/ 
int main(void) {
    int num = 10;

    int& ref = num;
    int& var = ref;

    cout << num << " " << ref << " " << var << endl;
    num++;
    cout << num << " " << ref << " " << var << endl;
    cout << &num << " " << &ref << " " << &var << endl;


    return 0;
}