#include <iostream>

int main(void) {
    int n;
    std::cout << "���� �Է� :";
    std::cin >> n;
    std::cout << "n :" << n << std::endl;

    double p;
    std::cout << "�Ǽ� �Է� :";
    std::cin >> p;
    std::cout << "p :" << p << std::endl;

    //�̸� ����ó �Է¹޾Ƽ� ���
    //char �� �迭�� �����ؼ� ����
    char name[30];
    char tel[20];

    std::cout << "�̸� : ";
    std::cin >> name;
    std::cout << "����ó : ";
    std::cin >> tel;

    std::cout << "�̸� : " << name << std::endl;
    std::cout << "����ó : " << tel << std::endl;
    return 0;
}