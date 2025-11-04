#include <stdio.h>
int main()
{
    char a[50],b[50];
    int i;
    i=0;
    printf("enter the string");
    scanf("%49s",a);
    while(a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
    b[i]='\0';
    printf("copied string=%s",b);
    return 0;
}