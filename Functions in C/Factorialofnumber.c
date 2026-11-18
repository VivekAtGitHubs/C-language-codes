#include<stdio.h>
void factorial(int);//func prototype
int main()
{
    int i;
    printf("enter number to find factorial");
    scanf("%d",&i);
    factorial(i);//func call
    return 0;
}
void factorial(int i)//func def
{
    int fact=1;
    while(i>=1)
    {
        fact=fact*i;
        i--;
    }
    printf("factorial=%d",fact);
}
