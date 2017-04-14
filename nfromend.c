#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node * link;
	int info;
};
void push(struct node **head,int data)
{
	struct node * next;
	next=(struct node*)malloc(sizeof(struct node));
	next->info=data;
	next->link=head;
	*head=next;
}
void nfromend(struct node **head,int n)
{
	struct node *hd,*ref;
	*ref=*hd;
	int count=0;
	while(count<n)
	{
		ref=ref->next;
		count++;
	}
	while(ref!=NULL)
	{
		ref=ref->next;
		hd=hd->next;
	}
	printf("%d\n",head->info );
}
int main()
{
	struct node **head=NULL;
	push(&head,4);
	push(&head,15);
	push(&head,25);
	push(&head,42);
	nfromend(&head,3);
	return 0;
}