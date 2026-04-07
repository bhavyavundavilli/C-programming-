#include<stdio.h>
#include<stdlib.h>
//creation of node datatype
struct node
{
	int data;
	struct node *next;
};
// Traverse 
void traverse(struct node *head)
{
    struct node *temp = head;
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

//Insertion node at starting position
void insert_begin(struct node **head,int value)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->next=*head;
*head=newnode;
}
//Insertion node at ending position
void insert_end(struct  node **head,int value)
{
	struct node *endnode,*temp=NULL;
	endnode=(struct node*)malloc(sizeof(struct node));
	endnode->data=value;
	endnode->next=NULL;
	temp=*head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=endnode;
}
//Insertion at specific position.
void insert_position(struct node **head, int value, int pos)
{
    struct node *newnode, *temp;
    int i;

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;

    temp = *head;

    for(i=1; i<pos-1; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}
//Delete a node at starting.
void deleteAtBegin(struct node **head)
{
	struct node *temp=*head;
	if(*head==NULL)
	{
	printf("List is empty deletion Not possible");
	return;	
	}
	*head=(*head)->next;
	free(temp);
}
//Delete a node at ending.
void deleteAtEnd(struct node **head)
{
	struct node *temp,*prev=NULL;
	temp=*head;
	if(*head==NULL)
	{
	printf("List is empty deletion Not possible");
	return;	
	}
	if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
		return;
	}
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	free(temp);	
}
//Delete a node at specific position.
void deleteAtPos(struct node **head)
{
	struct node *temp=*head;
	struct node *delNode;
	int pos,i=1;
	if(*head==NULL)
	{
	printf("List is empty deletion Not possible");
	return;	
	}
	printf("enter position you want to delete");
	scanf("%d",&pos);
	if(pos==1)
	{
		*head=(*head)->next;
		free(temp);
		return;
	}
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	delNode=temp->next;
	temp->next=delNode->next;
	free(delNode);
}
//serach element in linked list.
void search(struct node *head, int key)
{
    struct node *temp = head;
    int pos = 1, found = 0;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while(temp != NULL)
    {
        if(temp->data == key)
        {
            printf("Element %d found at position %d\n", key, pos);
            found = 1;
            break;
        }
        temp = temp->next;
        pos++;
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }
}
// Main function
int main()
{
    struct node *head = NULL;
    int choice, value, pos;

    while(1)
    {
        printf("\n--- MENU ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at End\n");
        printf("6. Delete at Position\n");
        printf("7. Traverse\n");
        printf("8. Search\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d",&value);
                insert_begin(&head,value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d",&value);
                insert_end(&head,value);
                break;

            case 3:
                printf("Enter value and position: ");
                scanf("%d%d",&value,&pos);
                insert_position(&head,value,pos);
                break;

            case 4:
                deleteAtBegin(&head);
                break;

            case 5:
                deleteAtEnd(&head);
                break;

            case 6:
                deleteAtPos(&head);
                break;

            case 7:
                traverse(head);
                break;

            case 8:
                printf("Enter element to search: ");
                scanf("%d",&value);
                search(head,value);
                break;

            case 9:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}
