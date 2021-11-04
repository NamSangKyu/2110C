#include <stdio.h>
/*
    함수(function)
        기능적 부분을 따로 코드로 작성해서
        필요할때마다 불러다 사용
    ※ 함수 작성시 주의 사항 : 함수하나당 기능 1개만 담당

    리턴타입 함수명(매개변수){
        실행문
        return 결과값;
    }
    리턴타입 : 함수의 결과값의 데이터 타입
    함수명 : 기능실행을 하기위한 호출명
    매개변수 : 해당 함수가 실행하기 위해 필요한 데이터를 받는 변수
              함수 호출시 반드시 매개변수 선언 대로 데이터를 보내야함
    return : 결과값을 되돌려주는 키워드
             return 오른쪽에 있는 값이 결과값
*/
int sum(int n1, int n2) {
    int result = 0;
    result = n1 + n2;
    return result;
}
int main(void) {
    int result;

    result = sum(10, 20);
    printf("sum : %d\n", result);
    result = sum(4, 7);
    printf("sum : %d\n", result);

    return 0;
}