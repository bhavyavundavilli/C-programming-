#include<stdio.h>
int main()
{
  int year;
  printf("enter year:\n");
  scanf("%d",&year);
  if (year%4==0)
  {
    printf("%d is Leap year",year);
  
    if (year%100!=0||year%400==0)
    {
  	printf("%d is Leap year",year);
    }
    else
    {
     printf("%d is NOT Leap year",year);
    }
  }
  else
   {
  	printf("%d is NOT Leap year",year);
   }
 
  return 0;
} 
