#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the height of the pattern :- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
