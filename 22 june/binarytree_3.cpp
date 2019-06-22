#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node *left,*right;
};
int countleaf_bt(Node *root){
	if(root==NULL)
		return 0;
	if(root->left==NULL && root->right==NULL)
		return 1;
	return countleaf_bt(root->left)+countleaf_bt(root->right);
}
int main(){
	Node *temp,*root;
	root=new Node();
	root->data=5;
	temp=new Node();
	temp->data=15;
	root->left=temp;
	temp=new Node();
	temp->data=20;
	root->right=temp;
	temp=new Node();
	temp->data=25;
	root->left->left=temp;
	temp=new Node();
	temp->data=30;
	root->left->right=temp;
	temp=new Node();
	temp->data=35;
	root->left->left->left=temp;
	int c=countleaf_bt(root);
	cout<<c;
	
	
}
