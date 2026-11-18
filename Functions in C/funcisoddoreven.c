#include<stdio.h>
void check(int);//function prototype
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    check(a);//function call
    if (a%2==0)
    printf("%d is even",a);
    else
    printf("%d is odd",a);
    return 0;
}
void check (int a)//function definition
{
    if(a<0)
    printf("invalid input");
}