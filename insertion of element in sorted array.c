#include<stdio.h>
int main()
{
    int i,j,n,a[100],p,count=0;
    printf("Enter the number of elements of the array :- \n");
    scanf("%d",&n);
    printf("Enter the element to be inserted in the array :- \n");
    scanf("%d",&p);
    printf("Enter the sorted elements of array :- \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(p>a[i])
            count+=1;
    }
    for(i=n-1;i>=count;i--)
    {
        a[i+1]=a[i];
    }
    a[count]=p;
     for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
