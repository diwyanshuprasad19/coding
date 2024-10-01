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
void remove()
{
	struct  Node* temp=head;
	while(temp->next!=NULL)
	{
	
	if(temp->data==temp->next->data)
	{
		temp->next=temp->next->next;
	}
	else
	{
		temp=temp->next;
	}
	}
}
int main() {
   insert(4);
   insert(3);
   insert(3);
   insert(3);
   insert(2);
   insert(2);
   insert(2);
   insert(1);
   cout<<"The linked list is: ";
   display();
   remove();
   display();
   return 0;
}
