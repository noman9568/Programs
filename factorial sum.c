#include<stdio.h>
int main()
{
   int n,i,sum=0,fact;
   scanf("%d",&n);
   fact=1;
for(i=1;i<=n;i++)
{
    fact=fact*i;
    sum=sum+fact/i;
}
printf("%d",sum);
   return 0;
}



