#include <stdio.h>

int main(void) {

    int no;
    printf("1. ��Ŀ��\n");
    printf("2. ����Ŀ��\n");
    printf("3. ��ũĿ��\n");
    printf("4. ������� Ŀ��\n");
    printf("���Ͻô� �޴� ��ȣ�� �Է��ϼ��� : ");
    scanf_s("%d", &no);

    switch (no)
    {
    case 4:
        printf("������� �÷� �߰�\n");
    case 3:
        printf("���� �߰�\n");
    case 2:
        printf("���� �߰�\n");
    case 1:
        printf("Ŀ�� �߰�\n");
    }
    printf("Ŀ�ǰ� ���Խ��ϴ�.");
    return 0;
}