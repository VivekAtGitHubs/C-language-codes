#include <stdio.h>

// Function prototype (optional but good practice)
void add(int, int);

// Main function
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    add(a, b);
    return 0;
}
// Function definition
void add(int a, int b) {
    int sum;
    sum = a + b;
    printf("\nAddition = %d\n", sum);
}