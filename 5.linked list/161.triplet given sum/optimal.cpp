// C++ program to find a pair with given sum x.
#include<bits/stdc++.h>
using namespace std;

// structure of node of doubly linked list
struct Node
{
	int data;
	struct Node *next, *prev;
};

// Function to find pair whose sum equal to given value x.
void pairSum(struct Node *head, int x)
{

Node* last=head;
while(last->next!=NULL)
last=last->next;
Node* curr=head;
while(curr->next->next!=NULL)
{
	Node* first=curr->next;
	Node* second=last;
	int a=curr->data;
	while(first->data<second->data)
	{
		int c=a+first->data+second->data;
		if(c==x)
		{
		cout<<a<<" "<<first->data<<" "<<second->data<<endl;
	 	first=first->next;
	 	second=second->prev;
	    }
	    else if(c<x)
	    {
	    	first=first->next;
		}
		else if(c>x)
		{
			second=second->prev;
		}
		
	}
	curr=curr->next;
}



}

// A utility function to insert a new node at the
// beginning of doubly linked list
void insert(struct Node **head, int data)
{
	struct Node *temp = new Node;
	temp->data = data;
	temp->next = temp->prev = NULL;
	if (!(*head))
		(*head) = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

// Driver program
int main()
{
	struct Node *head = NULL;
	insert(&head, 9);
	insert(&head, 8);
	insert(&head, 6);
	insert(&head, 5);
	insert(&head, 4);
	insert(&head, 2);
	insert(&head, 1);
	int x = 17;

	pairSum(head, x);

	return 0;
}

