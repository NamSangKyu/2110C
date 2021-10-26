#include <stdio.h>
/*
*   break : break를 직접 감싸고 있는 반복문 하나를 강제로 종료
* 
*   continue : 반복문에서 남은 일을 무시하고 다음 반복 회차로 넘어감
*/
int main(void) {
    int i = 1, result = 0;

    while (1) {
        result += i;
        i++;
        if (result >= 5050) {
            break;
        }
    }

    printf("result : %d\n", result);

    for (i = 1; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}