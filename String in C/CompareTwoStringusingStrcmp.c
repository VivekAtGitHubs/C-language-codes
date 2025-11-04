#include<stdio.h>
#include<string.h>
int main()
{
  char a[50],b[50];
  printf("\nenter first string") ;
  scanf("%49s",a);
  printf("\nenter second string");
  scanf("%49s",b);
  if(strcmp(a,b)==0)
  printf("\nequal string");
  else if (strcmp(a,b)>0)
  printf("\nfirst string is greater");
  else
  printf("\n second string is greater");
  return 0;
}