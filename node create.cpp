#include<stdio.h>
#include<stdlib.h>
struct N
{
	int data;
	struct N *next;
};
int main(){
	struct N *head=NULL, *temp=NULL,*newN;
	int n,i;
	printf("enter number of nodes: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newN=(struct N*)malloc(sizeof(struct N));
		printf("\nenter data:");
		scanf("%d",&newN->data);
		newN->next=NULL;
		if(head==NULL)
		{
			head=newN;
			temp=newN;
		}
		else
		{
			temp->next=newN;
			temp=newN;
			
		}
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("%d -> ",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}
