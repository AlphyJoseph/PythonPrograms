#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node * link;
	int info;
};
void push(struct node **head,int data)
{
	struct node* next;
	next=(struct node*)malloc(sizeof(struct node));
	next->info=data;
	next->link=*head;
	*head=next;
}
void firstandlast(struct node **head)
{
	struct node *next=*head;
	struct node *prev=*head;
	while(next!=NULL)
	{
		prev=next;
		next=next->link;
	}
	next->link=*head;
	prev->link=NULL;
	*head=next;
}
int main()
{
	struct node *head=NULL;
	push(&head,4);
	push(&head,15);
	push(&head,25);
	push(&head,42);
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->info);
		temp=temp->link;
	}
	firstandlast(&head);
	while(temp!=NULL)
	{
		printf("%d\t",temp->info);
		temp=temp->link;
	}
	return 0;
}