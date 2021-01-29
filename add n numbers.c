#include<stdio.h>
int add(int [],int);
int main()
{
    int n, i,a[50];
    printf("enter no of ele:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
     }
    printf("%d",add(a,n));
  }
int add(int a[],int n)
 {
    int i,s=0;
    for(i=0;i<n;i++)
    {
        s+=a[i];
        }
      return s;
    }
