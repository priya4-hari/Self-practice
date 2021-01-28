#include<stdio.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    }
void main()
{
    int n1,n2;
    printf("enter two numbers :");
    scanf("%d %d",&n1,&n2);
    swap(&n1,&n2);
    printf("%d %d",n1,n2);
    }
   
   
#include<stdio.h>
int add(int *a,int *b)
{
    int result;
    result=*a+*b;
    return result;
    }
void main()
{
    int n1,n2,r;
    printf("enter two numbers :");
    scanf("%d %d",&n1,&n2);
    r=add(&n1,&n2);
    printf("%d",r);
    }
