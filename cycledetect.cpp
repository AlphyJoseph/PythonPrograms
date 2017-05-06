bool iscycle(Node *head)
{
	Node *slow=head;
	Node *fast=head;
	while(fast!=NULL)
	{
		if(head==NULL)
			return false;
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
			return true
	}
	return false;
}