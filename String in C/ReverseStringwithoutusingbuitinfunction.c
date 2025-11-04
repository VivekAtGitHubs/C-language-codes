#include <stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    int i,j;
    printf("\nenter string ");
    scanf("%49s",a);
    j=0;
    for(i=strlen(a)-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    printf("\nreverse of string=%s",b);
    return 0;
    }