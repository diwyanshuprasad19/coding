#include<bits/stdc++.h>
using namespace std;
 
// Data structure to store a binary tree node
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
 
// Iterative function to perform inorder traversal on the tree
void iterative(Node* root)
{
        stack<Node*> s;
        Node* curr=root;
              //is stack is empty and curr is null consition false
        while(!s.empty()||  curr!=NULL)
        {
        	if(curr!=NULL)
        	{
        		s.push(curr);
        		curr=curr->left;
			}
			else
			{
				curr=s.top();
				s.pop();
				cout<<curr->data;
				curr=curr->right;
			}
		}
}
 
 void recursive(Node* root)
 {
 	if(root==NULL)return;
 	recursive(root->left);
 	cout<<root->data<<" ";
 	recursive(root->right);
 }
 
 
int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
     recursive(root);
     cout<<endl;
     iterative(root);
 
    return 0;
}
