#include<bits/stdc++.h>
#include <cmath>
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
int main(){
	int c=-1;
	int b=0;
	Node *head=NULL;
	insert(&head,10);
	insert(&head,30);
	insert(&head,23);
	insert(&head,20);
	insert(&head,40);
	insert(&head,50);
	Node *t=head;
	while(t!=NULL){
	c++;
	t=t->next;
		
		
	}
	Node *n=head;
	while(n!=NULL){
		if(b==c/2){
			cout<<n->data;
		}
		b++;
		n=n->next;
	}
}
	
