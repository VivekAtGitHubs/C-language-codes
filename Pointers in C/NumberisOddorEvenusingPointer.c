 #include <stdio.h>
int main()
{
    int a,*p;
    printf("\n enter number to check for odd or even");
    scanf("%d",&a);
    p=&a;
    if(*p%2==0)
    printf("even");
    else
    printf("number is odd");
    return 0;
}