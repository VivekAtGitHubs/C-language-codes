#include<stdio.h>
int greatest(void); // Function prototype
int main()
{
    int result;
    result = greatest(); // Function call
    printf("Greatest number = %d", result);
    return 0;
}
// Function definition
int greatest(void)
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>=b && a>=c)
    {
        return a;
    }
    else if(b>=a && b>=c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
