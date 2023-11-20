#include<stdio.h>
int main()
{
    int low=0,high,mid,a[100],n,key,i;
    printf("Noman Hussain\n2200320130115\n");
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    printf("Enter sorted array - ");
    for(i=0;i<n;i++)
    {  scanf("%d",&a[i]); }
    printf("Enter element to find : ");
    scanf("%d",&key);
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    { if(key>a[mid])
     { low=mid+1;
       mid=(low+high)/2; }
    else if(key<a[mid]) {
       high=mid-1;
       mid=(low+high)/2; }
    else if(key==a[mid]) {
        printf("Element found.");
        break; }
    }
    if(key!=a[mid])
    { printf("Element not found."); }
    return 0;
}
