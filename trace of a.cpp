#include<stdio.h>
int main()
{
	int a[2][2],i,j,sum=0;
	printf("enter array elements;\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{ 
	sum=sum+a[i][i];
	}
	printf("%d",sum);
	return 0;
}
