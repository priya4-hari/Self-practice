#include<stdio.h>
int main()
{
    int a, n, r, s=0;
    printf("enter number:");
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
      r=a%10;
      s=s*10+r;
      a=a/10;
      }
    if(s==n)
    {
        printf("palindrome ");
        }
      else
      {
        printf("not palindrome ");
        }
        return 0;
        }
