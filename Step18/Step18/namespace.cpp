#include <iostream>
//namespace Ű���带 �̿��ؼ� �ڵ�󿡼� ������ �������� ����
namespace A {
    int num = 20;
    void printMessage() {
        std::cout << "namespace A" << std::endl;
    }
};
namespace B {
    int num = 10;
    void printMessage() {
        std::cout << "namespace B" << std::endl;
    }
};
int main(void) {
    A::num++;
    std::cout << A::num << std::endl;
    std::cout << B::num << std::endl;
    A::printMessage();
    B::printMessage();
    return 0;
}