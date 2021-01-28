#include<stdio.h>
int main()
{
    int n, sqrt, r, s=0;
    printf("enter number :");
    scanf("%d",&n);
    sqrt=n*n;
    while(sqrt>0)
    {
        r=sqrt%10;
        s+=r;
        sqrt=sqrt/10;
        }
    if(s==n)
    {
        printf("%d is neon number ",n);
        }
     else
       {
        printf("not neon number ");
        }
        return 0;
        }
#include<stdio.h>
int main()
{
    int a, n, s=0,r;
    printf("enter number:");
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        r=a%10;
        s+=r;
        a=a/10;
        }
      if(n%s==0)
        {
            printf("%d is Niven number ",n);
            }
       else
        {
            printf("not niven");
            }
            return 0;
            }
