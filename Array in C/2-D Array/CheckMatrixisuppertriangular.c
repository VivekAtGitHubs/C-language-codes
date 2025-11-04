#include<stdio.h>
int main()
{
   int a[3][3],i,j,flag=0;
    printf("\n enter values for matrix");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n enter values for 2d Array");
        scanf("%d",&a[i][j]);
    }
    printf("\n 2d array elements are ");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d",a[i][j]);
    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if((i>j)&&(a[i][j]!=0))
        flag=1;
    }
    if(flag==1)
    printf("\nnot upper triangular matrix");
    else
    printf("\nupper triangular matrix");
    return 0;
    }