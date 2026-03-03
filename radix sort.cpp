#include<stdio.h>
void radixsort(int a[],int n);
int getmax(int a[],int n);
void bucketsort(int a[],int n, int exp);
int main(){
	int a[]={20,147,98,149,274,96};
	int i,n=6;
	radixsort(a,n);
	printf("sorted elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
void radixsort(int a[],int n)
{
	int max=getmax(a,n);
	int exp;
	for(exp=1;(max/exp)>0;exp*=10)
	{
		bucketsort(a,n,exp);
	}
}
int getmax(int a[],int n)
{
	int max=a[0],i;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
}
void bucketsort(int a[],int n, int exp)
{
	int bucket[10][100], count[10];
	int i,j,k;
	for(i=0;i<10;i++)
	count[i]=0;
	for(i=0;i<n;i++){
		int digit=(a[i]/exp)%10;
		bucket[digit][count[digit]]=a[i];
		count[digit]++;	
	}
	k=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<count[i];j++)
		{
			a[k]=bucket[i][j];
			k++;
		}
		
	}
}
