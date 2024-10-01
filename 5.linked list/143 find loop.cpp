#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
};
struct node* head=NULL;
void push(int data)
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=head;
	head=newnode;
}
void display()
{
	struct node* temp=head;
	int count=0;
	while(temp!=NULL )
	{
		cout<<temp->data;
		temp=temp->next;
		count++;
	}
}
void detect()
{
	//same as earlier program 2 condition 12345673 one and 123451 this
	struct node* low=head;
	struct node* high=head;
	while(low!=NULL && high!=NULL && high->next!=NULL)
	{
		low=low->next;
		high=high->next->next;
		if(low==high)
		break;
	}
	if(low==head)
	cout<<low->data;
	else if(low==high)
	{
		low=head;
		while(low!=high)
		{
			low=low->next;
			high=high->next;
		}
		cout<<low->data;
	}
}

int main()
{

	push(5);
	push(4);
	push(3);
	push(2);
	push(1);
	struct node* t=head;
	struct node* t1=head;
	while(t->next!=NULL)
	{
		t=t->next;
	}
 t->next=head;
detect();
	
}
