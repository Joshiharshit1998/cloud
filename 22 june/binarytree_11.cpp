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
int check_level(Node *root){
	if(root == NULL)
		return 1;
	if(root->left==NULL || root->right==NULL)
		return 1;
	if(height_bt(root->left)==height_bt(root->right))
		return (check_level(root->left) && check_level(root->right));
	
}
int main(){
	int h,h1,h2;
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
	
	temp=new Node();
	temp->data=45;
	root->right->right->right=temp;
	
	if(check_level(root))
		cout<<"YES";
	else
		cout<<"NO";
	
	
}
