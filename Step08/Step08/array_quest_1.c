#include <stdio.h>
/*
    정수형 배열 길이가 10개짜리 선언 후
    배열에 내용을 직접 입력받는 반복문을 작성

    1. 배열에 입력된 숫자들의 총합을 출력
    2. 배열에 입력된 숫자들 중 제일 큰 숫자를 출력
    3. 배열에 입력된 숫자들 중 제일 작은 숫자를 출력
*/
int main(void) {
    int arr[10];
    int i, total, max;
    const int len = sizeof(arr) / sizeof(int);
    for (i = 0; i < len; i++) {
        printf("%d 번째 숫자 입력 : ", i + 1);
        scanf_s("%d", &arr[i]);
    }
    //----------------------------------
    total = 0;
    max = arr[0];
    for (i = 0; i < len; i++) {
        total += arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    printf("총합 : %d\n", total);
    printf("최대값 : %d\n", max);
    return 0;
}



