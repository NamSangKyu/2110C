#include <iostream>
using namespace std;
//총 클래스
//  멤버변수
//      총알 - bullet
//  멤버함수
//      생성자에서 총알을 받아서 초기화
//      발사 - shot --> 발사 한번 호출할때마다 총알을 하나씩 소모
//               총알이 없으면 Reload Reload라고 메세지 출력
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