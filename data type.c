#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	char name[100];
	printf("enter the integer:\n");
	printf("enter the float:\n");
	printf("enter the char:\n");
	printf("enter the string:\n");
	scanf("%d %f %c ",&a,&b,&c);
	scanf("%[^\n]", name);
	printf("integer:%d\n",a);
	printf("float:%f\n",b);
	printf("char:%c\n",c);
	printf("string:%s",name);
	return 0;
	
	
	
}
