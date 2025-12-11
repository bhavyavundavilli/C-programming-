
#include<stdio.h> 
int fact();
int main() 
{ 
  printf("fact=%d",fact());
  
}
 int fact()
{
	int n,i,fact=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
     return fact;
}
