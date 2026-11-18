#include<stdio.h>
void sum(int);//function prototype
int main()
{
    int i;
    printf("sum of digits of number");
    scanf("%d",&i);
    sum(i);//func call
    return 0;
}
void sum(int i)//func def
{
    int sum=0;
    while(i>0)
    {
        sum=sum+i%10;
        i=i/10;
    }
    printf("sum of digits=%d",sum);
}