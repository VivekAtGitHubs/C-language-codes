#include <stdio.h>
int main()
{
    int a[3][3],i ,j,key;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\nenter value for 2d array");
        scanf("%d",&a[i][j]);
    }
    printf("\n enter number to search");
   scanf("%d",&key);
   for(i=0;i<3;i++)
   for(j=0;j<3;j++)
   {
       if(a[i][j]==key)
     
           printf("element found at a[%d][%d]pos",i,j);
       }
       
   printf("element not found");
    return 0;
   }