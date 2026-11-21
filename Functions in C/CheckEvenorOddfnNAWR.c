#include<stdio.h>
int evenodd(void); // Function prototype
int main()
{
    int result;
    result = evenodd(); // Function call
    if(result == 1)
        printf("Number is Even");
    else
        printf("Number is Odd");

    return 0;
}
// Function definition
int evenodd(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}