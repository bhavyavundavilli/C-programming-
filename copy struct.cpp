#include<stdio.h>
struct student
{
	int roll_no;
	char name[20];
	float marks;
};
int main()
{
	struct student s1={824,"sri",76.9};
	struct student s2;
	s2=s1;
	printf("%d\n",s1.roll_no);
	printf("%d",s2.roll_no);
	return 0;
}
