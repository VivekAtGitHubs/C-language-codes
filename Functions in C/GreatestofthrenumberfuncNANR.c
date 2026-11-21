#include<stdio.h>
void greatest(void);// func prototype
int main ()
{
    greatest();// func call
    return 0;
}
void greatest(void)// func defn
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("greatest no is =%d",a);

    }
    else if (b>a && b>c)
    {
        printf("greatest no is=%d",b);
    }
    else
    {
    printf("c is the greatest=%d",c);
}
}