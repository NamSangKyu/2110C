#include <stdio.h>

int main(void) {

    int no;
    printf("1. 블랙커피\n");
    printf("2. 설탕커피\n");
    printf("3. 밀크커피\n");
    printf("4. 헤이즐넛 커피\n");
    printf("원하시는 메뉴 번호를 입력하세요 : ");
    scanf_s("%d", &no);

    switch (no)
    {
    case 4:
        printf("헤이즐넛 시럽 추가\n");
    case 3:
        printf("프림 추가\n");
    case 2:
        printf("설탕 추가\n");
    case 1:
        printf("커피 추가\n");
    }
    printf("커피가 나왔습니다.");
    return 0;
}