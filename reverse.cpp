#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *link;
}*start;
class linked_list
{
public:
	node *create_node(int);
	void insert_last();
	void reverse();
	linked_list()
	{
		start=NULL;;
	}

}
int main()
{
	linked_list ll;
	while(1)
	{
		cout<<"Linked link operations"<<endl;
		cout<<"1.Insert at end"<<endl;
		cout<<"2.Reverse list"<<endl;
		cout<<"3.Exit"<<endl;
		cout<<"Enter choice"<<endl;
		int ch;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"inser node";
				ll.insert_last();
			break;
			case 2:
				cout<<"reverse node"<<endl;
				ll.reverse();
			break;
			case 3:
				exit(1);
			break;

		}
	}
}
node * linked_list :: create_node(int value)
{
	struct node *temp;
	temp=new(struct node);
	if(temp==NULL)
	{
		cout<<"memory not allocated"<<endl;
		exit(1);
	}
	else
	{
		temp->data=value;
		temp->link=NULL;
		return temp;
	}
}