#include<stdio.h>
int main()
{
    int n, i, j,isprime;
    printf("enter no of ele:");
    scanf("%d",&n);
    printf("prime numbers are:");
    for(i=2;i<=n;i++)
    {
         isprime=0;
         for(j=2;j<=(i/2);j++)
         {
            if(i%j==0)
            {
               isprime=1;
                break;
             }
            }
       if(isprime==0)
       {
        printf("%d",i);
        }
            }
            }
