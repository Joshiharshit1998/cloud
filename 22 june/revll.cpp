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
void revlist(Node **head){
	Node *prev=NULL;
	Node *curr=*head;
	Node *right=(*head)->next;
	while(curr!=NULL){
		right=curr->next;
		curr->next=prev;
		prev=curr;
		curr=right;
		
	}
	*head=prev;
}
int main(){
	Node *head=NULL;
	insert(&head,10);
	insert(&head,30);
	insert(&head,23);
	revlist(&head);
	Node *t=head;
	cout<<"after reversing";
	while(t!=NULL){
		cout<<t->data<<" ";
		t=t->next;
		
		
	}
	
}
