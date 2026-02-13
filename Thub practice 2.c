#include<stdio.h>
#define minutes_per_hour 60
#define seconds_per_hour 3600
int main()
{
	int hours,minutes,seconds;
	printf("enter the no:of hours:\n");
	scanf("%d",&hours);
	minutes=hours*minutes_per_hour;
	seconds=hours*seconds_per_hour;
	printf("the no:of minutes for given hours:%d\n",minutes);
	printf("the no:of seconds for given hours:%d",seconds);
}
