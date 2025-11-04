#include <stdio.h>
int main()
{
    int a[3][3],i,j,sum;
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
        for(i=0;i<3;i++);
        {
            sum=0;
            for(j=0;j<3;j++)
            sum=sum+a[i][j];
            printf("\nsum of row is %d",i+1,sum);
        }
         for(i=0;i<3;i++)
         {
             sum=0;
             for(j=0;j<3;j++);
             sum=sum+a[j][i];
             printf("\nsum of column%dis%d",i+1,sum);
         }
    return 0;
}