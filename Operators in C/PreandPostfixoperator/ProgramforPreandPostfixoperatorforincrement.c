#include <stdio.h>
int main() {
    int a = 5, b = 10;
    printf("\nValue of a = %d", a++);         // Prints 5, then a becomes 6
    printf("\nValue of a = %d", +a);          // Prints current a (6)
    printf("\nValue of b = %d", b++);         // Prints 10, then b becomes 11
    printf("\nValue of b = %d", ++b);         // Prints 11, then b becomes 12
    printf("\nPostfix value = %d", (a++) + (b++));  // a=6 (use), b=12 (use), then a=7, b=13
    printf("\nPrefix value = %d", (+a) + (+b));     // a=7, b=13 (just adding)
    printf("\nLast value = %d", (+a) + (b++));      // a=7, b=13 (use), then b=14
    return 0;
}