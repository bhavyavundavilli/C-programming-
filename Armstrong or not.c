#include<stdio.h>
int main()
{
	int n,r,temp,A=0;
	scanf("%d",&n);
	temp=n;
    while(n>0)
    {
    	r=n%10;
    	A=A+(n*n*n);
    	n=n/10;
    	
	}
	if(temp==A)
	{
	
	 printf("%d is Armstrong",temp);
    }
    else
    {
    	printf("%d is not an Armstrong",temp);
	}
	return 0;
}
