#include <iostream>
using namespace std;
//Call by Reference
void Swap(int* a, int* b) {
    cout << "void Swap(int* a, int* b)" << endl;
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Swap(int& a, int& b) {
    cout << "void Swap(int& a, int& b)" << endl;
    int temp = a;
    a = b;
    b = temp;
}
void pow(int& n) {
    n *= n;
}
int main(void) {
    int n1 = 10, n2 = 20;
    Swap(&n1, &n2);
    cout << n1 << " , " << n2 << endl;
    Swap(n1, n2);
    cout << n1 << " , " << n2 << endl;
    pow(n1);
    cout << n1 << endl;
    return 0;
}