#include<stdio.h>
void addition(int[],int);
void main()
{
	int a[100],n,i;
	printf("Enter n value:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	addition(a,n);
}
	void addition(int m[],int n)
	{
		int i,sum=0;
		for(i=0;i<=n;i++)
		{
			sum=sum+m[i];
		}
		printf("%d",sum);
		
	}
	

