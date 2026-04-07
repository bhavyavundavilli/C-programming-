#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};

int main(){
	struct node *head=NULL, *temp=NULL, *newnode;
	int n,i;
	printf("Enter number of nodes:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("\nEnter data:");
		scanf("%d", &newnode->data);
		
		newnode->prev=NULL;
		newnode->next=NULL;
		if(head==NULL){
			head=newnode;
			temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
		
	}
	
	
	temp=head;
	printf("double linked list is \n");
	while(temp!=NULL)
	{
		printf("%d<->",temp->data);
		temp= temp->next;
	}
   printf("NULL\n");
   return 0;
}

