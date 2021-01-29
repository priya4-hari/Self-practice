#include<stdio.h>
int main()
{
    int i, found=0,n;
    printf("enter number:");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            found=1;
            break;
            }
            }
     if(found==0)
     {
        printf("%d is prime",n);
        }
      else
        {
            printf("%d is not prime",n);
            }
            }
