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

    return 0;
}