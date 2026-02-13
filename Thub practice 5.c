#include<stdio.h>
int main()
{
	int a,b,remainder;
	printf("Enter the values of a and b:\n");
	scanf("%d %d",&a,&b);
	remainder=a-(a/b)*b;
	printf("the remainder of %d and %d:%d",a,b,remainder);
	return 0;
}
