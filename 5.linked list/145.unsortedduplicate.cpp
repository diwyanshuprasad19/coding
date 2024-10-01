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
	map<int,int> m;
	struct Node* curr=head;
	m[curr->data]=1;
	struct Node* prev=curr;
	curr=curr->next;
	while(curr!=NULL)
	{
		if(m[curr->data]==1)
		{
			prev->next=curr->next;
			
		}
		else
		{
			m[curr->data]=1;
			prev=curr;
		}
		curr=curr->next;
	}
}
int main() {
   insert(4);
   insert(2);
   insert(5);
   insert(2);
   insert(4);
   insert(1);
   insert(1);
   cout<<"The linked list is: ";
   display();
   remove();
   display();

   return 0;
}
