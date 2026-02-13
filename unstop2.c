#include<stdio.h>
int main(){
	char c;
	char s[50];
	char sen[100];
	scanf("%c",&c);
	scanf("%s",s);
	scanf("%[^\n]",sen);
	printf("%c\n",c);
	printf("%s\n",s);
	printf("%s\n",sen);
	return 0;
}
