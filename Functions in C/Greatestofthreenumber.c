#include <stdio.h>
int largest(int a, int b, int c); // Function prototype
int main()
{
    int a, b, c, result;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    result = largest(a, b, c); // Function call
    printf("Largest number = %d", result);
    return 0;
}
// Function definition
int largest(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}
