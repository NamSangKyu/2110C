#include <iostream>
using namespace std;
int& add(int& n) {
    n++;
    return n;
}
int main(void) {
    int num = 10;
    //�Ű����� ������, ���� ����, �޴� ������ �������� ���
    int& ref = add(num);

    cout << num << " " << ref << endl;
    cout << &num << " " << &ref << endl;

    //�Ű����� ������, ���� ����, �޴� ������ �Ϲ� ������ ���
    //�Ϲ� �����϶��� ���� �����ڷ� ���� �ص� ������ ���� ��������� ������ ���� ����޴´�
    int var = add(num);

    cout << num << " " << var << endl;
    cout << &num << " " << &var << endl;

    return 0;
}