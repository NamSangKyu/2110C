#include <iostream>
using namespace std;
/*
*   싱글톤 패턴
*       프로그램 시작부터 끝날때까지 하나의 객체 생성해서 활용
*/ 
class Number {
private:
    int count;
    //1. 자신을 가리킬 포인터
    static Number* instance;
    //2. private 생성자
    Number() {
        cout << "Number()" << endl;
        count = 0;
        count++;
    }
public:
    //3. instance를 리턴할 static 함수가 필요
    static Number& GetInstance() {
        //객체가 만약에 생성이 안되어 있다면, 생성
        if (instance == NULL)
            instance = new Number();
        return *instance;
    }
    void PrintCount() {
        cout << "현재 Count 값 : " << count << endl;
    }
};
Number* Number::instance = NULL;
int main(void) {
    Number n = Number::GetInstance();
    n.PrintCount();
    Number& n2 = Number::GetInstance();
    n2.PrintCount();
    return 0;
}
