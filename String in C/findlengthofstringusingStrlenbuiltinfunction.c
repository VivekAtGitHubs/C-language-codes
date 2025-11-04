#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("\nenter string");
    scanf("%49s",str);
    printf("length of string is %d",strlen(str));
    return 0;
}