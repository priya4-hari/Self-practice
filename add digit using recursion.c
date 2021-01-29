#include<stdio.h>
int digit(int);
int main()
{
    int n;
    printf("enter number;");
    scanf("%d",&n);
    printf("%d",digit(n));
    }
 int digit(int n)
 {
     if(n==0)
        return 0;
      return(n%10)+digit(n/10);
        }
