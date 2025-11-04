#include<stdio.h>
#include<string.h>
int main()
{
   char s2[30]="Ramesh is a good boy";
   char s1[30];
   strcpy(s1,s2);
   printf("string s1 is%s",s1);
   return 0;
}