#include <stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("\nenter string in lower case");
    scanf("%49s",a);
    for(int i=0;a[i]!='\0';i++)
    a[i]=a[i]-32;
    printf("\nstring are in upper case=%s",a);
    return 0;
    }