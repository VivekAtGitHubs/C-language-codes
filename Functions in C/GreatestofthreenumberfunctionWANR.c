#include <stdio.h>
void largest(int, int, int); // Function prototype
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    largest(a, b, c); // Function call
    return 0;
}
// Function definition
void largest(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        printf("The largest number = %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("The largest number = %d", b);
    }
    else
    {
        printf("The largest number = %d", c);
    }
}
