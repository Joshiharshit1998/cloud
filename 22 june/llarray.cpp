#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
};
void insert(Node **head,int value){
Node *temp=new Node();
temp->data=value;
temp->next=NULL;
if(*head==NULL){
	*head=temp;
	return;
}
Node *ln=*head;
while(ln->next!=NULL){

ln=ln->next;}
ln->next=temp;
return;

	
}
void insert_front(Node **head,int value){
	Node *temp=new Node();
	temp->data=value;
	temp->next=*head;
	*head=temp;
}
int main(){
	int n;
	cout<<"enter the size";
	cin>>n;
	int a[n];
	cout<<"enter array elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	Node *head=NULL;
	for(int i=0;i<n;i++){
		insert(&head,a[i]);
	}
	for(int i=n-1;i>=0;i--){
		insert_front(&head,a[i]);
	}
	Node *t=head;
	cout<<"linked list of array is:";
	while(t!=NULL){
		cout<<t->data<<" ";
		t=t->next;
	}
}
