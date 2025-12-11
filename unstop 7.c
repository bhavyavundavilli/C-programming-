#include<stdio.h>
int main()
{
	int cust;
	int u,c;
	scanf("%d",&cust);
	scanf("%d",&u);
	if(u>=0&&u<=200)
	 
		c=u*0.50;
     
  	else if(u>=202&&u<=400)
	 
		c=100+(u-200)*0.65;
	 
	else if(u>=401&&u<=600);
	 
		c=230+(u-400)*0.80;
	else
		 c=390+(u-600)*1.50;
	printf("Amount to be paid is %.2f", c);
	return 0;
}
