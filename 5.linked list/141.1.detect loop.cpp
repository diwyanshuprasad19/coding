#include<bits/stdc++.h>
using namespace std;

struct node   //for map one=https://www.youtube.com/watch?v=C_bc2tfyM0M
{
	int data;
	struct node* next;
	int flag;
	node(int data)
	{
		this->data=data;
		next=NULL;
		flag=0;
	}
};

struct linkedlist
{
	node*head;
	linkedlist()
	{
		head=NULL;
	}
	void push(int data)
	{
		node* temp=new node(data);
		temp->next=head;
		head =temp;
	}
	void display()
	{
		struct node* temp=head;
		while(head!=NULL)
		{
			cout<<temp->data;
			temp=temp->next;
		}
	}
	bool detect(node* head)
	{
		while(head!=NULL)
		{
		
		if(head->flag==1)
		return true;
		
		head->flag=1;
		head=head->next;
	}
	return false;
	}
};

int main()
{
	linkedlist l;
	l.push(2);
	l.push(5);
	l.push(4);
	l.push(3);
	l.push(2);
	l.push(1);
	l.display();
	bool b=l.detect(l.head);
	if(b)
	cout<<"loop found";
	else
	cout<<"loop not found";
}
