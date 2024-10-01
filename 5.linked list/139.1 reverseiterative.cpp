#include<bits/stdc++.h>
using namespace std;
 struct Node
 {
 	int data;
 	struct Node* next;
 };
 struct Node *head=NULL;
 
 void insert(int value)
 {
 	struct Node * new1=(struct Node*)malloc(sizeof(struct Node));
 	new1->data=value;
 	new1->next=head;
 	if(head==NULL)
 	{
 		head=new1;
	}
	else
	{
		head=new1;
	}
 }
 void display()
 {
 	struct Node* ptr=head;
 	while(ptr!=NULL)
 	{
 		cout<<ptr->data;
 		ptr=ptr->next;
	 }
	 cout<<endl;
 }
 void reverse()
 {
 	struct Node* current=head;
 	struct Node* nex=NULL;
    struct Node* prev=NULL;
    while(current!=NULL)
	{
	   nex=current->next;
	   current->next=prev;
	   prev=current;
	   current=nex;	
	}
	head=prev;	
 }

 int main()
 {
 	insert(5);
 	insert(4);
 	insert(3);
 	insert(2);
 	insert(1);
 	display();
 	reverse();
 	display();
 	
 	
 	
 	return 0;
 }
