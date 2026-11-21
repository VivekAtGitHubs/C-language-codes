#include<stdio.h>
void factorial ();//func prototype
int main()
{
    factorial();//func call
    return 0;
}
void factorial(void)//func def
{
    int i,fact =1;
    printf("enter the number");
    scanf("%d",&i);
    while(i>=1)
    {
        fact=fact*i;
        i--;
    }
    printf("factorial=%d",fact);
}