#include<stdio.h>
int main()
{
    int n,fac=1;
    printf("\n enter number");
    scanf("%d",&n);
    do
    {
        fac=fac*n;
        n--;
    }
    while(n>0);
    printf("\n factorial=%d",fac);
    return 0;
}