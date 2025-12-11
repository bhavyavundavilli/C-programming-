#include<stdio.h>
void fact();
void main()
{
	printf("factoriaal program with functions\n");
	fact();
}
void fact()
{
	int n,i,fact=1;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial=%d",fact);
}
