#include <iostream>
using namespace std;
//�� Ŭ����
//  �������
//      �Ѿ� - bullet
//  ����Լ�
//      �����ڿ��� �Ѿ��� �޾Ƽ� �ʱ�ȭ
//      �߻� - shot --> �߻� �ѹ� ȣ���Ҷ����� �Ѿ��� �ϳ��� �Ҹ�
//               �Ѿ��� ������ Reload Reload��� �޼��� ���
class Gun {
protected:
    int bullet;
public:
    Gun(int b) : bullet(b) {}
    void shot() {
        if (bullet <= 0) {
            cout << "Reload Reload" << endl;
        }
        else {
            bullet--;
            cout << "BBang!" << endl;
        }
    }
};

int main(void) {

    return 0;
}