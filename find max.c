#include<stdio.h>
int main()
{
    int a, b,c,max;
    printf("enter three numbers :");
    scanf("%d %d %d",&a,&b,&c);
    max=a>b?a>c?a:c:b>c?b:c;
    printf("max=%d",max);
    return 0;
    }
#include<stdio.h>
int main()
{
    int n, a[50],i, max;
    printf("enter no of ele:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            }
            }
            printf("max=%d",max);
            return 0;
            }
