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
    Node* curr=head;
    while(curr->next->next!=NULL)
    {
    	Node* temp=curr->next;
    	while(temp->next!=NULL)
    	{
    		Node* t=temp->next;
    		while(t!=NULL)
    		{
    			int a=curr->data;
    			int b=temp->data;
    			int c=t->data;
    			if(a+b+c==x)
    			cout<<a<<" "<<b<<" "<<c<<endl;
    			t=t->next;
			}
			temp=temp->next;
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
	insert(&head, 1);
	insert(&head, 2);
	insert(&head, 4);
	insert(&head, 5);
	insert(&head, 6);
	insert(&head, 8);
	insert(&head, 9);
	int x = 17;

	pairSum(head, x);

	return 0;
}
//time complexity->O(n^3)
//space->O(n)

