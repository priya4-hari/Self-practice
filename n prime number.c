#include<stdio.h>
int main()
{
       int n, prime, j, i,sum=0;
       printf("enter number:");
       scanf("%d",&n);
       for(i=2;i<=n;i++)
       {
          prime=1;
          for(j=2;j<=(i/2);j++)
          {
            if(i%j==0)
            {
                prime=0;
                break;
            }
            }
         if(prime==1)
         {
            sum+=1;
            }
               }
            printf("sum=%d",sum);
            return 0;
           }
