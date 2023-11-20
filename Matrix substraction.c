
#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],r[100][100],r1,r2,c1,c2,i,j;
    printf("Enter rows and columns of matrix 1 :- ");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and columns of matrix 2 :- ");
    scanf("%d %d",&r2,&c2);
    if(r1==r2 & c1==c2)
    {
    printf("Enter the elements of matrix 1 :- \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix 2 :- \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            r[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Result of matrix subtraction is :- \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",r[i][j]);
        }
    }
    }
    else{
        printf("Subtraction not possible");
    }
    return 0;
}
