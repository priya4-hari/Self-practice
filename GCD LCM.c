#include<stdio.h>
int main()
{
    int a, b, i,gcd;
    printf("enter two numbers :");
    scanf("%d %d",&a,&b);
    for(i=0;(i<a&&i<b);i++)
    {
        if(a%i==0&&b%i==0)
        {
               gcd=i;
            }
           }
        printf("%d",gcd);
        }
        
        
#include<stdio.h>
int main()
{
    int a, b, gcd, lcm, i;
    printf("enter two numbers :");
    scanf("%d %d",&a,&b);
    for(i=0;(i<a&&i<b);i++)
    {
        if(a%i==0&&b%i==0)
        {
            gcd=i;
            }
            }
      lcm=(a*b)/gcd;
    printf("gcd=%d",gcd);
    printf("\nlcm=%d",lcm);
    return 0;
    }
