#include<stdio.h>
int main()
{
    int a[100],i,n,key;
    printf("Noman Hussain\n2200320130115\n");
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of array - \n");
    for(i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    printf("Enter element to be found : ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    { if(a[i]==key)
      { printf("Element found at :%d",i); }
    }
    return 0;
}
