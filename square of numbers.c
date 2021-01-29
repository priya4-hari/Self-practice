#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[50],m, i;
    printf("enter no of ele:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        }
    for(i=0;i<n;i++)
    {
        m=a[i]*a[i];
        printf("%d ",m);
        } 
        }
