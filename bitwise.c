//program on bitwise operators
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values a and b:\n");
	scanf("%d %d",&a,&b);
	printf("%d & %d=%d\n",a,b,a&b);
	printf("%d|%d=%d\n",a,b,a|b);
	printf("%d^%d=%d\n",a,b,a^b);
	printf("~%d=%d\n",a,~a);
	printf(" %d<<1=%d\n",a,a<<1);
	printf("%d>>1=%d\n",a,a>>1);
	return 0;
}

