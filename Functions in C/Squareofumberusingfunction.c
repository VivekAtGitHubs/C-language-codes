#include <stdio.h>
int square(int n);  // Function prototype
int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = square(n);  // Function call
    printf("Square of %d is %d", n, result);
    return 0;
}
// Function definition
int square(int n)
{
    return n * n;
}