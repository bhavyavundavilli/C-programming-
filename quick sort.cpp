#include<stdio.h>
int partition(int a[], int lb,int ub)
{
	int i=lb, j=ub, pivot=a[lb],temp;
	while(i<j)
	{
		while(a[i]<=pivot && i<ub)
		i++;
		while(a[j]>pivot)
		j--;
	  if(i<j)
	  {
	  	temp=a[i];
	  	a[i]=a[j];
	  	a[j]=temp;
	  }
	}
	temp=a[lb];
	a[lb]=a[j];
	a[j]=temp;
	return j;
}
void quicksort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		int pos=partition(a,lb,ub);
		quicksort(a,lb,pos-1);
		quicksort(a,pos+1,ub);
	}
}
int main()
{
	int i, a[]={17,16,10,15,19,12,20,14,18};
	int n=9;
	quicksort(a,0,n-1);
	printf("sorted elements:\n");
	for(i=0;i<9;i++)
	{
		printf("%d ",a[i]);
	}	
}

