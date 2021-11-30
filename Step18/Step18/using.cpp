#include <iostream>
namespace A {
    int num = 20;
    void printMessage() {
        std::cout << "namespace A" << std::endl;
    }
};
using A::num;
using A::printMessage;
//cout endl cin using 처리
//using std::cout;
//using std::cin;
//using std::endl;
using namespace std; //네임스페이스 std는 네임스페이스를 안쓰고 바로 접근해서 사용하겠다.
int main(void) {
    std::cout << num << std::endl;
    std::cout << A::num << std::endl;
    printMessage();
    A::printMessage();
    cout << num << endl;
    return 0;
}