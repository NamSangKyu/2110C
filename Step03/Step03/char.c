#include <stdio.h>
/*
* ������ ���� Ÿ�� : char - 1 byte - %c
*   ���ĺ� ��ҹ���, ����, Ư������ --> ���� �ϳ��� ����
*   �ѱ��̳� ��Ÿ ������ �ȵ� �޸𸮰� ����
*/
int main(void) {
    char ch1 = 'A';//���ڴ� ''�� ����
    int ch2 = 66;
    printf("%c %d\n", ch1, ch1);
    printf("%c %d\n", ch2, ch2);

    char ch3 = 'a';
    printf("%c %d\n", ch3, ch3);


 
    return 0;
}