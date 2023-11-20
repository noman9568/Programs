#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter the number of elements of array :- \n");
    scanf("%d",&n);
    printf("Enter the elements of array :- \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
