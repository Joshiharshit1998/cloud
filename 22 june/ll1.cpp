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
void insert_after(Node *prenode,int value){
	Node *temp=new Node();
	temp->data=value;
	temp->next=prenode->next;
	prenode->next=temp;
	return;
	
}
void delet(Node **head,int key){
	Node* temp=*head;
	if(temp->data==key){
		*head=temp->next;
		delete(temp);
		return;
		
	}
	Node *prev;
	while(temp!=NULL && temp->data!=key){
		prev=temp;
		temp=temp->next;
		
	}
	if(temp==NULL){
		cout<<"key not found";
		return;
	}
	prev->next=temp->next;
	delete(temp);
	
}
int main(){
	Node *head=NULL;
	insert(&head,10);
	insert(&head,30);
	insert(&head,23);
	insert_front(&head,45);
	insert_after(head->next->next,60);
	delet(&head,23);
	Node *t=head;
	while(t!=NULL){
		cout<<t->data<<" ";
		t=t->next;
		
		
	}
	
	
}
