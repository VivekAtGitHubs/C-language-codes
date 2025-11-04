#include <stdio.h>
void reverse(int);
int main()
{
    int i;
    printf("\nenter number to find reverse");
    scanf("%d",&i);
    reverse(i);
    return 0;
}
void reverse(int i)
{
    int rev=0;
    while(i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
    printf("reverse=%d",rev);
}