#include<stdio.h>
struct node
{
	struct node * link;
	int info;
};
void reverse(struct node **head)
{
	struct *prev=NULL;
	struct *cur=head;
	struct *after;
	while(cur!=NULL)
	{
		after=cur->link;
		cur->link=prev;
		prev=cur;
		cur=after;
	}


}