#include<bits/stdc++.h>
#include<unordered_map>
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

int main()
{

	push(7);
	push(6);
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
	t1=t1->next;
	t1=t1->next;
	t->next=t1;
	//use hashmap to remove loop->use current and prev
	unordered_map<node*,int>m;
	struct node* curr;
	struct node* prev;
	curr=head->next;
	prev=head;
	while(!m[curr])
	{
		m[prev]=1;
		curr=curr->next;
		prev=prev->next;
	}
	prev->next=NULL;
	display();
}
