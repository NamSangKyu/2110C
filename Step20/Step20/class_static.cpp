#include <iostream>
using namespace std;

class Number {
private:
    static int count;
    int num;
public:
    Number() {
        count++;
        cout << count << "번째 생성" << endl;
    }

    static int GetCount() {
        //static은 미리 메모리가 할당되기때문에 GetCount에서는 멤버변수가 생성이 되어있지 않음, 접근할수 없음
        //static은 static 선언된것만 접근이 가능
        //static 안붙어 있는 함수는 static 선언된 변수나 함수를 언제든지 사용이 가능함
        //num++; <<--- non static
        return count;
    }
};
//static으로 선언된 멤버변수는 반드시 외부에서 초기화를 시켜줘야됨
int Number::count = 0;
int main(void) {
    cout << "현재 Number::count : " << Number::GetCount() << endl;
    Number n1, n2, n3;

    return 0;
}