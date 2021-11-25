#include <stdio.h>
#define max(a, b) (a > b ? a : b)
#define swap(a,b){\
int temp = a;\
a = b;\
b = temp;\
}
int main(void) {
    int n1 = 10, n2 = 20;
    /*for(int i=0;i<1000000;i++)
        printf("max : %d\n", max(n1, n2));*/
    swap(n1, n2);
    printf("%d, %d \n", n1, n2);
    return 0;
}