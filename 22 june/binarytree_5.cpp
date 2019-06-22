#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node *left,*right;
};
int identical_bt(Node *root,Node *root1){
	if(root==NULL && root1==NULL)
		return 1;
	if(root==NULL || root1==NULL)
		return 0;
	if(root->data==root1->data)
		return identical_bt(root->left,root1->right) && identical_bt(root->right,root1->left);
	return 0;
}
int main(){
	Node *temp,*root,*root1;
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
	root->left->left->left=temp;
	root1=new Node();
	root1->data=5;
	temp=new Node();
	temp->data=20;
	root1->left=temp;
	temp=new Node();
	temp->data=15;
	root1->right=temp;
	temp=new Node();
	temp->data=30;
	root1->left->left=temp;
	temp=new Node();
	temp->data=25;
	root1->right->right=temp;
	temp=new Node();
	temp->data=35;
	root1->right->right->right=temp;
	int h=identical_bt(root,root1);
	cout<<h;
	
	
}
