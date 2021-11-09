#include <stdio.h>
/*
    배열 2행 4열, 배열 4행 2열 짜리 정수형 배열을 만듬
     초기화
    1 2 3 4       copy     1 5 
    5 6 7 8      ----->    2 6 
                           3 7
                           4 8
    2행 4열에 초기화한 내용을 
    4행 2열짜리에 위에 그림처럼 복사 후 출력
*/
int main(void){
    int arr1[2][4] = { 1,2,3,4,5,6,7,8 };
    int arr2[4][2];
    int i, j;
    //배열 복사
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++)
            arr2[j][i] = arr1[i][j];
    }
    //출력
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++)
            printf("%d ", arr2[i][j]);
        printf("\n");
    }


    return 0;
}