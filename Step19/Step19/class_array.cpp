#include <iostream>
using namespace std;
class Position {
private:
    int xpos;
    int ypos;
public:
    //Position() {}
    Position(int x, int y) {
        xpos = x;
        ypos = y;
        cout << "������(int, int)" << endl;
    }
    void PrintInto() {
        cout << xpos << " , " << ypos << endl;
    }
};
int main(void) {
    //Position arr[5];//�⺻ �����ڰ� ������ �迭������ �ȵ�
    Position* arr[5];//�����ͺ����� �迭�� ����
    arr[0] = new Position(10, 20);//��ǥ�� �����ϴ� Ŭ������ �����Ҵ��ؼ� ����
    arr[0]->PrintInto();
    arr[1] = new Position(3, 5);
    (*arr[1]).PrintInto();
    return 0;
}