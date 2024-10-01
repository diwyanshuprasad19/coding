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
   {
   	last=last->next;
   }
   Node* first=head;
   while(first->data<last->data)
   {
   	int a=first->data;
   	int b=last->data;
   	if(a+b==x)
   	{
   	cout<<a<<" "<<b<<endl;
   	first=first->next;
   	last=last->prev;
   	
   }
   	else if(a+b<x)
   	first=first->next;
   	else if(a+b>x)
   	last=last->prev;
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
	int x = 7;

	pairSum(head, x);

	return 0;
}
