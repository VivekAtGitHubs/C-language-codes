#include <stdio.h>
void add(void);
int main()
{
    add();
    return 0;
}
void add(void)
{
    int a,b,sum;
    printf("\nenter two numbers");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("\naddition=%d",sum);
}