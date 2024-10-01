#include<bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
   cout<<endl;
}
void del(int n)
{
	struct Node* temp;
	temp=head;
	for(int i=0;i<n-2;i++)
	{
		temp=temp->next;
	}
	struct Node* temp1=temp->next;
	temp->next=temp1->next;
}
void rev()
{
	struct Node* current=head;
	struct Node* prev=NULL;
	struct Node* nex=NULL;
	while(current!=NULL)
	{
	
	nex=current->next;
	current->next=prev;
	prev=current;
	current=nex;
    }
    head=prev;
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   del(3);
   display();
   rev();
   display();
   return 0;
}
