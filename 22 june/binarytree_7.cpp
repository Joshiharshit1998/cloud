#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node *left,*right;
};
int height_bt(Node *root){
	if(root==NULL)
		return 0;
	return max(height_bt(root->left),height_bt(root->right))+1;
}
void printlevel(Node *root,int level){
	if(root==NULL)
		return;
	if(level==1){
		cout<<root->data<<" ";
		return;
	}
	printlevel(root->left,level-1);
	printlevel(root->right,level-1);
}
void printlevelopposite(Node *root,int level){
	if(root==NULL)
		return;
	if(level==1){
		cout<<root->data<<" ";
		return;
	}
	printlevelopposite(root->right,level-1);
	printlevelopposite(root->left,level-1);
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
	int h=height_bt(root);
	for(int i=1;i<=h;i++){
		if(i%2)
			printlevel(root,i);
		else
			printlevelopposite(root,i);
	}

	
	
}
