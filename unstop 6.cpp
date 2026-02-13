#include<stdio.h>
int main(){
	int C,B,Ch,M,E,T;
	float A;
	scanf("%d%d%d%d%d",&C,&B,&Ch,&M,&E);
	T=(C+B+Ch+M+E);
	A=T/5.0;
	printf("%d\n",T);
	printf("%.2f",A);
	return 0;
	
}
