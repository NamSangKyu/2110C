#include <iostream>
using namespace std;
/*
*   �̱��� ����
*       ���α׷� ���ۺ��� ���������� �ϳ��� ��ü �����ؼ� Ȱ��
*/ 
class Number {
private:
    int count;
    //1. �ڽ��� ����ų ������
    static Number* instance;
    //2. private ������
    Number() {
        cout << "Number()" << endl;
        count = 0;
        count++;
    }
public:
    //3. instance�� ������ static �Լ��� �ʿ�
    static Number& GetInstance() {
        //��ü�� ���࿡ ������ �ȵǾ� �ִٸ�, ����
        if (instance == NULL)
            instance = new Number();
        return *instance;
    }
    void PrintCount() {
        cout << "���� Count �� : " << count << endl;
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
