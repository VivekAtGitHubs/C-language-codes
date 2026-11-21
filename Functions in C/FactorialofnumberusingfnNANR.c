#include<stdio.h>
int factorial(void);//func prototype
int main()
{
    int result;
    result =factorial();
    printf("factorial=%d",result);
    return 0;
}
int factorial(void)
{
    int i,fact=1;
    printf("enter the number");
    scanf("%d",&i);
    while(i>=1)
    {
        fact= fact*i;
        i--;
    }
printf("factorial of the number=%d",fact);
return(fact);
}