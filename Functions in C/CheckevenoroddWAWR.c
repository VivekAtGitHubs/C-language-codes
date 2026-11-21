#include<stdio.h>
int evenodd(int); // Function prototype
int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = evenodd(n); // Function call
    if(result == 1)
        printf("Number is Even");
    else
        printf("Number is Odd");

    return 0;
}
// Function definition
int evenodd(int n)
{
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}