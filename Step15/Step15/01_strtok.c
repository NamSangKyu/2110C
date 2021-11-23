// 01_strtok.c
#include <stdio.h>
#include <string.h>  // strtok_s()

int main() {

    char str[] = "hello,world,nice,to,meet,you";
    char* context = NULL;
    char* token;  // �и��� ���ڿ�

    // 1��° ��ū �и��� ���۰�(str, &str[0])�� �����ؾ� �Ѵ�.
    token = strtok_s(str, ",", &context);  // �޸�(,) ���� �ϳ��� �и�
    printf("%s\n", token);
    
    // 2��° ��ū �и��� ���۰��� ������ �ʿ䰡 ����.
    token = strtok_s(NULL, ",", &context);
    printf("%s\n", token);
    
    // 2��° ��ū �и����ʹ� ���� �ڵ带 ����Ѵ�. (�ݺ�������!)
    token = strtok_s(NULL, ",", &context);
    printf("%s\n", token);

    // 2��° ��ū �и����ʹ� �Ʒ� �ڵ带 ����ϸ� �ȴ�.
    while (token != NULL) {
        token = strtok_s(NULL, ",", &context);
        printf("%s\n", token);
    }

}