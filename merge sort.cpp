#include<stdio.h>
void merge(int a[],int lb, int mid, int ub)
{
	int i=lb, j=mid+1, k=ub, b[100];
	while(i<=mid && j<=ub)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
    	while(i<=mid)
    	{
		b[k]=a[j];
		i++;
 		k++;
	  }
	   while(j<=ub)
    	{
		b[k]=a[j];
		j++;
		k++;
    	}
	   for(k=lb;k<=ub;k++)
	  {
		a[k]=b[k];
	  }
} 
void mergesort(int a[],int lb,int ub)
{
  if(lb<ub)
  {
  	int mid=(lb+ub)/2;
  	mergesort(a,lb,mid);
  	mergesort(a,mid+1,ub);
  	merge(a,lb,mid,ub);
  } 	
}
int main(){
	int a[]={40,19,20,13,14,23};
	int i, n=6;
	mergesort(a,0,n-1);
	printf("sorted elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
