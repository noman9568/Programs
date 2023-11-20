
#include<stdio.h>
#include<stdlib.h>
int push(int );
int pop(int );
long long int stack[100000];
int top=-1;
int main()
{
    int n,key,great=0,i;
    long long int element;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&key);

    switch(key)
    {
       case 1:
            scanf("%lld",&element);
            push(element);
            break;

       case 2:
            pop(top);
            break;

        case 3:
            great=stack[0];
            for(i=0;i<top;i++)
            {
                if(stack[i]>great)
                {  great=stack[i]; }
            }
            printf("%lld\n",stack[great]);
            break;
        }
    }
}
int push(m)
{
    stack[top++]=m;
}
int pop(int p)
{
    top--;
}
