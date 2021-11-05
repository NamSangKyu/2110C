#include <stdio.h>
/*
*   포인터
*       - 포인터는 메모리 주소값을 저장하고 있는 변수
*       - 저장하고 있는 주소값을 이용하여 해당 주소값 근처나,
*         해당 주소에 저장되어있는 값을 읽고 쓰기가 가능함
* 
*       ※ 키워드
*           포인터는 메모리 주소값만 저장하는 변수 
* 
*/

int main(void) {
	int num = 20;
	int* ptr = &num;

	printf("변수 num의 주소값 : %p\n", &num);
	printf("포인터 변수 ptr의 주소값 : %p\n", &ptr);
	printf("ptr : %p\n", ptr);
	printf("*ptr : %d\n", *ptr);

    return 0;
}