#include <iostream>
namespace A {
    int num = 20;
    void printMessage() {
        std::cout << "namespace A" << std::endl;
    }
};
using A::num;
using A::printMessage;
//cout endl cin using ó��
//using std::cout;
//using std::cin;
//using std::endl;
using namespace std; //���ӽ����̽� std�� ���ӽ����̽��� �Ⱦ��� �ٷ� �����ؼ� ����ϰڴ�.
int main(void) {
    std::cout << num << std::endl;
    std::cout << A::num << std::endl;
    printMessage();
    A::printMessage();
    cout << num << endl;
    return 0;
}