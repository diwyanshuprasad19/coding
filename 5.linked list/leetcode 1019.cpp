#include<bits/stdc++.h>
using namespace std;
int arr[100];
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
int fix()
{
	struct Node* temp=head;
	int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
int* show(int l)
{
	struct Node* t=head;
	struct Node* t1=head;

	int count=0;
	while(t!=NULL)
	{
		t1=t->next;
		while(t1!=NULL)
		{
			if(t1->data>t->data)
			{
				arr[count]=t1->data;
				count++;
				break;
			}
			else if(t1->next==NULL)
			{
				arr[count]=0;
				count++;
				break;
			}
			t1=t1->next;
		}
		t=t->next;
	}
	arr[l-1]=0;
return arr;
}
int main() {
   insert(5);
   insert(2);
   insert(9);
   insert(1);
   cout<<"The linked list is: ";
   display();
   int l=fix();
   cout<<l<<endl;
 int *a;
 a=show(l);
 for(int i=0;i<l;i++)
 {
 	cout<<*(a+i)<<endl;
 }
   return 0;
}
