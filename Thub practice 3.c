#include <math.h>
#include<stdio.h>
int main()
{
	double n,square,cube;
	printf("enter a number:\n");
    scanf("%lf",&n);
	square=pow(n,2);
	cube=pow(n,3);
	printf("the square of n:%lf\n",square);
	printf("the cube of n:%lf\n",cube);
	return 0;
	
	
}
