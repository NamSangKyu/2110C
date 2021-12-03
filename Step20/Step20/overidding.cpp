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
/*
    K2 클래스 - 부모 클래스는 Gun
        멤버변수
            총기발사 모드
        멤버함수
            발사
                단발 - 한발씩 발사
                점사 - 3발씩 발사
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
    //오버라이딩 : 부모가 준 함수를 재구현 --> 함수 형식이 동일함
    void shot() {
        if (mode) {
            cout << "현재 발사모드 점사" << endl;
            Gun::shot();
            Gun::shot();
            Gun::shot();
        }
        else {
            cout << "현재 발사모드 단발" << endl;
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