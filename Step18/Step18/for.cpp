#include <iostream>

int main(void) {
    //1���� 100���� ���� ���ؼ� ����ϴ� �ڵ带 �ۼ�
    //�� �ݺ����� for���� ���
    int total = 0;

    //�ʱ�ȭ ������ ������ ������ �ϸ� ���������� �ǰڽ��ϴ�.
    for (int i = 1; i <= 100; i++)
        total += i;

    //i++; //i�� �������� ����Ǿ��� ������ for���� ����Ǹ� i�� �����

    std::cout << total << std::endl;
    return 0;
}