#include<stdio.h>
int main(){
	int r;
	float pi,A,V;
	scanf("%d",&r);
	pi=3.14;
	A=pi*r*r;
	V=(4*pi*r*r)/3.0;
	printf("%f\n",A);
	printf("%f\n",V);
	return 0;
}
