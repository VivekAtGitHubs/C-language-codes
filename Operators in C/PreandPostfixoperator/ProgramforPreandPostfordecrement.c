#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("\nValue of a = %d", a--);         
    printf("\nValue of a = %d", -a);          
    printf("\nValue of b = %d", b--);         
    printf("\nValue of b = %d", b--);         
    printf("\nPostfix value = %d", (a--) + (b--));  
    printf("\nPrefix value = %d", (-a) + (-b));     
    printf("\nLast value = %d", (-a) + (b--));      
    return 0;
}
