#include<stdio.h>
int main()
{
    int i,j,n,k,m=1;
    printf("Enter the height of the pattern :- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            printf(" ");
        }
        for(k=0;k<m;k++)
        {
            printf("*");
        }
        printf("\n");
        m=m+2;
    }
    return 0;
}

