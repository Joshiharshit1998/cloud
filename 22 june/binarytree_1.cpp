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
	root->left->left->left=temp;
	int h=height_bt(root);
	cout<<h;
	
	
}
