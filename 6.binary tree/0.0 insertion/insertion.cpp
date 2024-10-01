#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int val):data(val),left(NULL),right(NULL){}
	~Node(){}
};
void insert(Node* root,int data)
{
	Node* nn=new Node(data);
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		Node* n=q.front();
		q.pop();
		if(n->left==NULL)
		{
		n->left=nn;
		return;
	    }
	    else if(n->right==NULL)
	    {
	    	n->right=nn;
	    	return;
		}
		else
		{
			q.push(n->left);
			q.push(n->right);
		}
		
	}
}

int main()
{
	Node* n10=new Node(10);
	Node* n20=new Node(20);
	Node* n30=new Node(30);
	Node* n40=new Node(40);
	Node* n50=new Node(50);
	Node* n70=new Node(70);
	int n=60;
	n10->left=n20;
	n10->right=n30;
	n20->left=n40;
	n20->right=n50;
	n30->right=n70;
	insert(n10,n);
	
}
