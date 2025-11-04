#include <stdio.h>
int factorial(int);
int main()
{
    int n,ans;
    printf("enter number");
    scanf("%d",&n);
    ans=factorial(n);
    printf("\nfactorial=%d",ans);
    return 0;
}
    int factorial (int x)
    {
        int f;
        if(x==0)
        return 1;
        f=x*factorial(x-1);
        return f;
    }