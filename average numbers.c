#include<stdio.h>
int main()
{
    int n, s=0,i,a[50];
    float avg;
    printf("enter no of ele:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
        }
        avg=s/n;
        printf("%f",avg);
      }
