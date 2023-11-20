#include<stdio.h>
int main()
{
    int i,j,n,a[100],item,position;
    printf("Enter the number of elements of the array :- \n");
    scanf("%d",&n);
    printf("Enter the element to be inserted in the array :- \n");
    scanf("%d",&item);
    printf("Enter position of element :- \n");
    scanf("%d",&position);
    printf("Enter elements of array :- \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=position-1;i--)
    {
        a[i+1]=a[i];
    }
    a[position-1]=item;
     for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
