#include <stdio.h>
//���ڿ� : ���ڰ� 1�� �̻��� ���ڵ��� ����
//         ���ڿ��� ""�� ��� ��Ÿ��
int main(void) {
    char str[] = "Hello World";
    char han[] = "�ȳ��ϼ���";//�ѱ��� 2byte
    //���ڿ� ��½� �ش� �ּҺ��� 
    //���ڵ��� �ϰ������� �ϳ��� �о ���
    //���ڿ� �������� ��Ÿ���� ���ؼ� �� �������� �ι��ڰ� ��
    printf("str : %s\n", str);
    printf("str : %d\n", str);
    printf("null : %c , %d\n", str[11], str[11]);
    printf("sizeof str : %d\n", sizeof(str));

    printf("han : %s\n", han);
    printf("sizeof han : %d\n", sizeof(han));


    return 0;
}