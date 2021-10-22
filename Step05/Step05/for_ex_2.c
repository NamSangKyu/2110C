#include <stdio.h>
/*
*   숫자 0을 입력할때까지 숫자입력을 받음
*   0을 입력하면 입력한 숫자들의 총합을 출력
* 
*   while_quest_4.c의 내용을 for문으로 변경
*/
int main(void) {

    int num=1, total=0;

    for ( ; num != 0; ) {
        printf("숫자 입력 : ");
        scanf_s("%d", &num);
        total += num;
    }
    printf("입력하신 숫자들의 총합 : %d\n", total);

    return 0;
}