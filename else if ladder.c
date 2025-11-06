#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,D,r1,r2,img,real;
	printf("enter a,b,c values:\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	D=(b*b-4*a*c);
	if (D>0)
	{
	  r1 = (-b+sqrt(D))/(2*a);
	  r2 = (-b-sqrt(D))/(2*a);
	  printf("the roots are %.2lf and %.2lf",r1,r2);
	}
	else if (D==0)
	{
	  r1=r2 = -b/(2*a);
	   printf("the roots are %.2lf and %.2lf",r1,r2);	
	}
	else
	{ 
	  real = -b/(2*a);
	  img = sqrt(D)/(2*a);
	  r1 = real+img;
	  r2 = real-img;
	  printf("the roots are %.2lf and %.2lf",r1,r2);
	}
     return 0;
}
	
	
	
	
	
	

