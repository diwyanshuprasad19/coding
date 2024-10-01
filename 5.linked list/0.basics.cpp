#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
};


int main()
{ struct Node* new1=(struct Node*)malloc(sizeof(struct Node));
	struct Node* new2 =(struct Node*)malloc(sizeof(struct Node));
	new1->data=1;
	new2->data=2;
	cout<<new1<<endl;
	cout<<new2<<endl;
	new1->next=new2;
	cout<<new1<<endl;
	cout<<new2<<endl;
	cout<<new1->next<<endl;
	new2->next=new1;
	cout<<new2->next<<endl;
	return 0;
}
