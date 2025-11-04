#include <stdio.h>
int main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\nenter value for 2d Array");
        scanf("%d",&a[i][j]);
    }
    printf("\n2d Array elements are");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d",a[i][j]);
        }
        printf("\n the Left diagonal element are");
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            if(i==j)
            printf("%d",a[i][j]);
        }
        printf("\n the Right diagonal elements are");
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            if(i+j==2)
            printf("%d",a[i][j]);
        }
       return 0;
}