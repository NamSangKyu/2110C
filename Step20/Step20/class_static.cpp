#include <iostream>
using namespace std;

class Number {
private:
    static int count;
    int num;
public:
    Number() {
        count++;
        cout << count << "��° ����" << endl;
    }

    static int GetCount() {
        //static�� �̸� �޸𸮰� �Ҵ�Ǳ⶧���� GetCount������ ��������� ������ �Ǿ����� ����, �����Ҽ� ����
        //static�� static ����Ȱ͸� ������ ����
        //static �Ⱥپ� �ִ� �Լ��� static ����� ������ �Լ��� �������� ����� ������
        //num++; <<--- non static
        return count;
    }
};
//static���� ����� ��������� �ݵ�� �ܺο��� �ʱ�ȭ�� ������ߵ�
int Number::count = 0;
int main(void) {
    cout << "���� Number::count : " << Number::GetCount() << endl;
    Number n1, n2, n3;

    return 0;
}