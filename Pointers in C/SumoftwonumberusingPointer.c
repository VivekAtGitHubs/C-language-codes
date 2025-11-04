 #include <stdio.h>
int main()
{
    int a,b,*p,*q,c;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    c=*p+*q;
    printf("\naddition=%d",c);
    return 0;
}