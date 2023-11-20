#include<stdio.h>
int main()
{
    int i,j,key=0;
    long long int a[100000],n,p,s[100000],max=0;
    scanf("%lld",&n);
    p=n;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            { key=a[j];
            a[j]=a[j+1];
            a[j+1]=key; }
        }
    }
    for(i=0;i<n;i++)
    {
        s[i]=p*a[i];
        p=p-1;
    }
    max=s[n-1];
    for(i=0;i<n;i++)
    {
        if(s[i]>max)
        { max=s[i]; }
    }
    printf("%lld",max);
}
