#include <iostream>

int main(void) {
    //1부터 100까지 합을 구해서 출력하는 코드를 작성
    //단 반복문은 for문을 사용
    int total = 0;

    //초기화 영역에 변수를 선언을 하면 지역변수가 되겠습니다.
    for (int i = 1; i <= 100; i++)
        total += i;

    //i++; //i는 지역변수 선언되었기 때문에 for문이 종료되면 i가 사라짐

    std::cout << total << std::endl;
    return 0;
}