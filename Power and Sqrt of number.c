#include<stdio.h>
#include<math.h>
int main()
{
    int n, p,result;
    printf("enter number:");
    scanf("%d",&n);
    printf("enter power number:");
    scanf("%d",&p);
    result=pow(n,p);
    printf("%d",result);
    return 0;
    }
    
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double result;
    printf("enter number :");
    scanf("%d",&n);
    result=sqrt(n);
    printf("%lf",result);
    return 0;
    }
