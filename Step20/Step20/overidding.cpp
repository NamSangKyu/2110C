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
/*
    K2 Ŭ���� - �θ� Ŭ������ Gun
        �������
            �ѱ�߻� ���
        ����Լ�
            �߻�
                �ܹ� - �ѹ߾� �߻�
                ���� - 3�߾� �߻�
*/
class K2 : public Gun {
private:
    bool mode;
public:
    K2(int b) : Gun(b) {
        mode = false;
    }
    void changeMode() {
        mode = !mode;
    }
    //�������̵� : �θ� �� �Լ��� �籸�� --> �Լ� ������ ������
    void shot() {
        if (mode) {
            cout << "���� �߻��� ����" << endl;
            Gun::shot();
            Gun::shot();
            Gun::shot();
        }
        else {
            cout << "���� �߻��� �ܹ�" << endl;
            Gun::shot();
        }
    }
};
int main(void) {
    K2 k2(24);
    for (int i = 0; i < 5; i++) {
        k2.shot();
    }
    k2.changeMode();
    for (int i = 0; i < 5; i++) {
        k2.shot();
    }
    return 0;
}