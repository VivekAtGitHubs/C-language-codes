#include<stdio.h>
void evenodd(void); // Function prototype
int main()
{
    evenodd(); // Function call
    return 0;
}
// Function definition
void evenodd(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");
}