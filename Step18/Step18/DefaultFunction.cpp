#include <iostream>
//�Ű� ������ �⺻���� ����
int sum(int a = 50, int b = 100) {
    return a + b;
}
//���ڰ��� �Ű������� ���� �� ���ʺ��� ���� ������
//�Ű����� �⺻���� �� �����ʺ��� ���ʴ�� ����
int minus(int a, int b = 10) {
    return a - b;
}
int main(void) {
    std::cout << sum(10, 20) << std::endl;
    std::cout << sum(10) << std::endl;
    std::cout << sum() << std::endl;

    return 0;
}