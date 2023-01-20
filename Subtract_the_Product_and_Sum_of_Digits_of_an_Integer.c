#include<stdio.h>

int main()
{
    int n,m,sum=0,p=1,r;
    scanf("%d",&n);
    while(n!=0)
    {
       r=n%10;
       sum=sum+r;
       p=p*r;
       n=n/10;
    }
    printf("%d",p-sum);
}