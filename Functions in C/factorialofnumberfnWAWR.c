#include<stdio.h>
int factorial(int); // Function prototype
int main()
{
    int i, result;
    printf("Enter the number: ");
    scanf("%d", &i);
    result = factorial(i); // Function call
    printf("Factorial = %d", result);
    return 0;
}
// Function definition
int factorial(int i)
{
    int fact = 1;
    while(i >= 1)
    {
        fact = fact * i;
        i--;
    }
    return fact;
}