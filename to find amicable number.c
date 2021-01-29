#include<stdio.h>
int main()
{
    int a, b, m=0, n=0, i,j;
    printf("enter two numbers :");
    scanf("%d %d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
            m+=i;
            }
    for(j=1;j<b;j++)
    {
        if(b%j==0)
            n+=j;
            }
    if((a==n)&&(b==m))
    {
        printf("%d %d are amicable ",a, b);
        }
     else
        {
            printf("not amicable ");
            }
            }
