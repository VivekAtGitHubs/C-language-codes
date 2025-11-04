#include <stdio.h>

// Function prototype
int add(void);

// Main function
int main() {
    int sum;
    sum = add();
    printf("\nAddition = %d\n", sum);
    return 0;
}

// Function definition
int add(void) {
    int a, b, c;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}
