#include <iostream>

int main(void) {
    int n;
    std::cout << "숫자 입력 :";
    std::cin >> n;
    std::cout << "n :" << n << std::endl;

    double p;
    std::cout << "실수 입력 :";
    std::cin >> p;
    std::cout << "p :" << p << std::endl;

    //이름 연락처 입력받아서 출력
    //char 형 배열로 선언해서 받음
    char name[30];
    char tel[20];

    std::cout << "이름 : ";
    std::cin >> name;
    std::cout << "연락처 : ";
    std::cin >> tel;

    std::cout << "이름 : " << name << std::endl;
    std::cout << "연락처 : " << tel << std::endl;
    return 0;
}