#include<stdio.h>
struct student
{
	int roll_no;
	char name[20];
	int m1,m2,m3;
	float total, average;
};
int main()
{
	struct student s[10];
	int i,n;
	printf("enter n value:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter student %d details:\n",i+1);
		printf("enter rollno,name and marks of 3 subjects:\n");
		scanf("%d%s%d%d%d%d",&s[i].roll_no,s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);
	    s[i].total=s[i].m1+s[i].m2+s[i].m3;
	    s[i].average=s[i].total/3.0;
    }
    for(i=0;i<n;i++)
    {
    	printf("student %d details:\n",i+1);
    	printf("Rollno :%d\n",s[i].roll_no);
    	printf("Name   :%s\n",s[i].name);
    	printf("Total  :%f\n",s[i].total);
    	printf("Average:%f\n",s[i].average);
	}
	
}
