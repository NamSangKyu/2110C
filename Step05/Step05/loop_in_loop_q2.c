#include <stdio.h>
/*

    정수 하나 입력 받은 후
    입력받은 정수만큼 삼각형을 출력

    숫자 입력 : 7
                줄번호     별개수    공백 개수
          *     1           1       6
         **     2           2       5
        ***     3           3       4
       ****     4           4       3
      *****     5           5       2
     ******     6           6       1
    *******     7           7       0

*/
int main(void) {
    //    줄개수 별개수 공백개수
    int i=0, line, star, space;

    printf("줄개수 입력 : ");
    scanf_s("%d", &line);

    while (i < line) {
        space = 0;
        while (space < line - 1 - i) {
            printf(" ");
            space++;
        }
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