#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node *left,*right;
};
int sum(int a,int b){
	return a+b;
}
int sum_bt(Node *root){
	if(root==NULL)
		return 0;
	return sum(sum_bt(root->left),sum_bt(root->right))+root->data;
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
	int s=sum_bt(root);
	cout<<s;
	
	
}
