#include<stdio.h>
int main(){
	int a=10,b=20;
	int *p1=&a;
	int *p2=&b;
	printf("%d",*p1+*p2);
	return 0;
}
