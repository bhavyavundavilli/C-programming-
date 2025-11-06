//program to print total and average of marks 
#include<stdio.h>
int main()
{
	int AC,LAC,C,BEEE,BI,total;
	float average;
	printf("Enter each subjest marks:\n");
	printf("AC marks:\n");
	scanf("%d",&AC);
    printf("LAC marks:\n");
    scanf("%d",&LAC);
    printf("C marks:\n");
    scanf("%d",&C);
    printf("BEEE marks:\n");
    scanf("%d",&BEEE);
    printf("BI marks:\n");
    scanf("%d",&BI);
    total=AC+LAC+C+BEEE+BI;
    printf("the total:%d\n",total);
    average=total/2;
    printf("the average:\n",average);
    return 0;
    
    
	
}
