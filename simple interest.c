#include<stdio.h>
int main()
{
	int P, R,T,simple_interest;
	printf("enter principle,rate,time:\n");
	scanf("%d %d %d",&P,&R,&T);
	
	simple_interest=P*T*R/100;
	printf("the simple interest:%d",simple_interest);
	
	
}
