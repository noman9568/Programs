#include<stdio.h>
void deci(int);
void push(int);
int st[100];
int p=0;
int main()
{
    int m,n,i;
    scanf("%d",&n);
    deci(n);
    for(i=p-1;i>=0;i--)
    {
        printf("%d ",st[i]);
    }
    return 0;
}

deci(int n) {
     if(n==0)
     {

         return;
     }
    int m=n%8;
    push(m);
    n=n/8;
    deci(n);
}
void push(int a)
{
  st[p]=a;
  p+=1;
}
