#include<stdio.h>
int main()
{
   int a[3][3],b[3][3],i,j,flag=0;
    printf("\n enter values for matrix");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n enter values for 2d Array");
        scanf("%d",&a[i][j]);
    }
    printf("\n enter value of second matrix");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
    printf("\nenter value for 2d Array");
    scanf("%d",&b[i][j]);
    }
    printf("\nfirst matrix is");
    for(i=0;i<3;i++)
    {
printf("\n");
for(j=0;j<3;j++)
printf("%d",a[i][j]);
}
printf("\n second matrix is");
for(i=0;i<3;i++)
{
    printf("\n");
    for(j=0;j<3;j++)
    printf("%d",b[i][j]);
}
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(a[i][j]!=b[i][j])
        flag=1;
    }
    if (flag==0)
    printf("the matrix id identitical");
    else
    printf("the matrix is not identitical");
    return 0;
}