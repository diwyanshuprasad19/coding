#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};

void level(Node* root)
{
	queue<Node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		Node* nn=q.front();
		q.pop();
		if(nn!=NULL)
		{
			cout<<nn->data<<" ";
			if(nn->left !=NULL)
			q.push(nn->left);
			if(nn->right!=NULL)
			q.push(nn->right);
		}
		else if(!q.empty())
		q.push(NULL);
	}
}


int main()
{
	Node* n1=new Node(1);
	Node* n2=new Node(2);
	Node* n3=new Node(3);
	Node* n4=new Node(4);
	Node* n5=new Node(5);
	Node* n6=new Node(6);
	Node* n7=new Node(7);
	n1->left=n2;
	n1->right=n3;
	n2->left=n4;
	n2->right=n5;
	n3->left=n6;
	n3->right=n7;
	level(n1);
	
	return 0;
}
