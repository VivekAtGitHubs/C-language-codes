#include<stdio.h>
void evenodd(int); // Function prototype
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    evenodd(n); // Function call
    return 0;
}
// Function definition
void evenodd(int n)
{
    if(n % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");
}