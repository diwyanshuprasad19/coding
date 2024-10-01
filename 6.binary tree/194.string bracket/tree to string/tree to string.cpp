
#include<bits/stdc++.h>
#include <iostream>  
#include<string>  
using namespace std;

struct Node{
	int data;
	 Node* left;
	Node* right;
Node(int val):data(val),left(NULL),right(NULL){}
	~Node(){}
};
void solve(TreeNode* root, string &ans){
        if(!root) return ;

        ans += to_string(root->val) ;
        if(root->left){
            ans+="(" ;
            solve(root->left,ans) ;
            ans+=")" ;
        }

        if(root->left == NULL && root->right!=NULL){
            ans+="()" ;
        }

        if(root->right){
            ans+="(" ;
            solve(root->right,ans) ;
            ans+=")" ;
        }
    }

    string tree2str(TreeNode* root) {
        if(!root) return "" ;

        string ans = "" ;
        solve(root, ans) ;

        return ans ;
    }

int main()
{
	Node* n1=new Node(1);
	Node* n2=new Node(2);
	Node* n3=new Node(3);
	Node* n4=new Node(4);
	n1->left=n2;
	n1->right=n3;
	n2->left=n4;
	string q="";
	func(n1,q);
	cout<<q;
	
	
	return 0;
}
