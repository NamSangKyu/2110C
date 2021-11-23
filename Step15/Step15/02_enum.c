// 02_enum.c
#include <stdio.h>

void ex1() {
    // ������
    // ���ÿ� ���� ���(const)�� ����.

    // ������ ����
    enum command {
        CREATE,  // ���� 0�� ����, �ʱ�ȭ�� ������ �ʱ�ȭ ������ 1�� �Ҵ�.
        READ,    // ���� 1�� ����
        UPDATE,  // ���� 2�� ����
        DELETE   // ���� 3�� ����
    };

    // ������ ���� ����
    // Ÿ�� : enum command
    // ���� : c
    enum command c;

    // ������ ������ ������ ���� ������
    c = CREATE;

    // ���� c�� CREATE(���� 0)�� ����
    printf("%d\n", c);

}
void ex2() {

    // enum + typedef

    typedef enum command {
        CREATE = 1,  // ���� 1
        READ,        // ���� 2
        UPDATE,      // ���� 3
        DELETE       // ���� 4
    } Command;  // ���� ������ Ÿ�� : Command

    // ����ڷκ��� ����� 1~4�� �Է� �޾Ƽ� ���� ����� ó���ϴ� ����

    // ������ ����
    Command c;

    c = CREATE;  // c = 1;

    if (c == CREATE) { // if (c == 1)
        printf("create �۾�\n");
    }
    else if (c == READ) {
        printf("read �۾�\n");
    }
    else if (c == UPDATE) {
        printf("update �۾�\n");
    }
    else if (c == DELETE) {
        printf("delete �۾�\n");
    }

}

#define TRUE 1
#define FALSE 0
void ex3() {
    
    typedef enum _command {
        EXIT = 0,
        CREATE = 1,
        READ = 2,
        UPDATE = 3,
        DELETE = 4
    } Command;

    Command cmd;

    // ���ѷ���
    while (TRUE) {
        
        printf("1:CREATE, 2:READ, 3:UPDATE, 4:DELETE, 0:EXIT >>> ");
        scanf_s("%d", &cmd);

        switch (cmd) {
        case CREATE:
            printf("create �۾�\n");
            break;
        case READ:
            printf("read �۾�\n");
            break;
        case UPDATE:
            printf("update �۾�\n");
            break;
        case DELETE:
            printf("delete �۾�\n");
            break;
        case EXIT:
            printf("����\n");
            return;  // �Լ� �����ϱ�(���ѷ��� ���� ������)
        }

    }

}
int main() {
    ex3();
}