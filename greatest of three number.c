#include<stdio.h>
int main()
{
    int a,b,c,greatest;
    printf("Enter the number to be compared :-\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            greatest=a;
        }
        else{
            greatest=c;
        }
    }
    else if(b>c)
        {
            greatest=b;
        }
        else{
            greatest=c;
        }
    printf("Greatest of three numbers entered by the user is :- %d",greatest);
    return 0;
}
