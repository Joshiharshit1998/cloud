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
	head->next->next=head->next;
	Node *p1=head;
	Node *p2=head;
	p1=p1->next;
	p2=p2->next->next;
	while(p1!=p2){
		p1=p1->next;
		p2=p2->next->next;	
		}
		cout<<"loop exist";
		}
