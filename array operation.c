#include<stdio.h>
#define maxsize 100
int main()
{
    int arr[maxsize],i,top=0,item,n;
   do{ printf("1.Insertion\n");
    printf("2.Deletion\n");
    printf("3.Traversal\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        if(top>maxsize)
        {
            printf("Array is full.\n");
        }
        else {
            printf("Enter element to insert\n");
            scanf("%d\n",&arr[top+1]);
            top++;
        }
    case 2:
           if(top>0)
        {
            printf("Array is empty.\n");
        }
        else {
           arr[top]=arr[top+1];
           top--;
        }
        break;
    case 3:
        if(top>0) {
           for(i=0;i<=top;i++)
            printf("%d",arr[i]); }
   }
    }while(n!=3);
}
