#include<stdio.h>
int main()
{
	int a,i,j,k,l;
	scanf("%d",&a);
	if(a>=3&&a<=100)
	{
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("
");
	}
	for(k=a-1;k>=1;k--)
	{
		for(l=k;l>=1;l--)
		{
			printf("*");
		}
		printf("
");
	}
	}
	else
	{
	    printf("The pattern is not possible");
	}
}