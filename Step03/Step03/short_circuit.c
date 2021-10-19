#include <stdio.h>
int main(void) {
    int n1 = 10, n2 = 15;
    int result;
     
    result = n1 == 10 || ++n2 < 20;
    printf("%d\n", n2);
    result = n1 != 10 && ++n2 < 20;
    printf("%d\n", n2);
    
    
    return 0;
}