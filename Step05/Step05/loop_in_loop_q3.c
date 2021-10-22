#include <stdio.h>
/*

    정수 하나 입력 받은 후
    입력받은 정수만큼 삼각형을 출력

    숫자 입력 : 7
                    줄번호     별개수    공백 개수
          *             1        1      6
         ***            2        3      5
        *****           3        5      4
       *******          4        7      3
      *********         5        9      2 
     ***********        6        11     1
    *************       7        13     0

*/
int main(void) {
    int i = 0, line, star=0, space=0;

    printf("줄 개수 : ");
    scanf_s("%d", &line);

    while (i < line) {
        space = 0;
        while (space < line - 1 - i) {
            printf(" ");
            space++;
        }
        star = 0;
        while (star < (i + 1) * 2 - 1) {
            printf("*");
            star++;
        }
        printf("\n");
        i++;
    }
        
    return 0;
}