#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[50];
    printf("\nenter first string s1");
    scanf("%99s",s1);
    printf("\nenter second string s2");
    scanf("%49s",s2);
    strcat(s1,s2);
    printf("output string after concatenation %s",s1);
    return 0;
}