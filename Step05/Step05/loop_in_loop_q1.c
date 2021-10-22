#include <stdio.h>
/*

    정수 하나 입력 받은 후
    입력받은 정수만큼 삼각형을 출력

    숫자 입력 : 7
                줄번호     별개수
    *           1           1
    **          2           2
    ***         3           3
    ****        4           4
    *****       5           5   
    ******      6           6
    *******     7           7

*/
int main(void) {
    int line, i=0, star;

    printf("줄개수 입력 : ");
    scanf_s("%d", &line);
    while (i < line) {
        star = 0;
        while (star <= i) {
            printf("*");
            star++;
        }
        printf("\n");
        i++;
    }

    return 0;
}