#include<bits/stdc++.h>
using namespace std;
//case taken are 456->457,459->460,999->1000,use reverse,
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
    Node* reverse(Node*head)
{
    Node* current=head;
	Node* prev=NULL;
	Node* nex=NULL;
	while(current!=NULL)
	{
	
	nex=current->next;
	current->next=prev;
	prev=current;
	current=nex;
    }
    return prev;
}
    Node* addOne(Node *head) 
    {
       head=reverse(head);
       bool f=true;
       Node* curr=head;
       while(curr!=NULL && f==true)
       {
           if(curr->next==NULL && curr->data==9)
           {
               curr->data=1;
               Node* temp=new Node(0);
               //last joi as at first we cannot connect second to temp
              temp->next=head;
              head=temp;
              curr=curr->next;
              
           }
           else if(curr->data==9)
           {
               curr->data=0;
               curr=curr->next;
           }
           else
           {
               curr->data=curr->data+1;
               f=false;
           }
       }
       head=reverse(head);
       return head;

    }
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();

   return 0;
}
