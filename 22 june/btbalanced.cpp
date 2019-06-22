#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node *left,*right;
};
int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int height_bt(Node *root){
	if(root==NULL)
		return 0;
	return max(height_bt(root->left),height_bt(root->right))+1;
}
int isbalanced(Node *root){
	if(root==NULL)
		return 1;
	int lh=height_bt(root->left);
	int rh=height_bt(root->right);
	if(abs(lh-rh)<=1 && isbalanced(root->left) && isbalanced(root->right))
		return 1;
	return 0;
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
	root->right->right=temp;
	temp=new Node();
	temp->data=35;
	//root->left->left->left=temp;
	if(isbalanced(root))
		cout<<"Yes tree is balanced.";
	else
		cout<<"Not balanced";
	
	
}
