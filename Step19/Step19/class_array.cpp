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
    Position* arr[5];//포인터변수를 배열로 선언
    arr[0] = new Position(10, 20);//좌표값 저장하는 클래스를 동적할당해서 생성
    arr[0]->PrintInto();
    arr[1] = new Position(3, 5);
    (*arr[1]).PrintInto();
    return 0;
}