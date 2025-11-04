#include <stdio.h>
int main()
{
  char a[50];
  int i;
  printf("\nenter the name");
  scanf("%49s",a);
  i=0;
  while(a[i]!='\0')
  i++;
      printf("total number of characters%d",i);
  return 0;
  }