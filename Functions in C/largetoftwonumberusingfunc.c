#include <stdio.h>
int largest(int, int); // Function prototype
int main()
{
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    result = largest(a, b); // Function call
    printf("Largest number = %d", result);
    return 0;
}
// Function definition
int largest(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
