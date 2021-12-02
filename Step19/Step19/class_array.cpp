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
        cout << "생성자(int, int)" << endl;
    }
    void PrintInto() {
        cout << xpos << " , " << ypos << endl;
    }
};
int main(void) {
    //Position arr[5];//기본 생성자가 없으면 배열선언이 안됨

    return 0;
}