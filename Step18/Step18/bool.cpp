#include <iostream>
bool CheckPrimeNumber(int n) {
    if (n < 2) return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main(void) {
    bool flag = true;
    
    std::cout << flag << " " << true << std::endl;
    flag = false;
    std::cout << flag << " " << false << std::endl;
    std::cout << sizeof(bool) << " " << sizeof(true) << " " << sizeof(10 > 5) << std::endl;

    for (int i = 1; i < 100; i++) {
        if(CheckPrimeNumber(i))
            std::cout << i << " ";
    }

    return 0;
}