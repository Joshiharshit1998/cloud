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
	int c=0;
	int b=0;
	Node *head=NULL;
	Node *head1=NULL;
	insert(&head,10);
	insert(&head,30);
	insert(&head,23);
	insert(&head1,3);
	insert(&head1,2);
	//head1->next->next=head->next->next->next;
	insert(&head,20);
	insert(&head,40);
	insert(&head,50);
	head1->next->next=head->next->next->next;
	Node *p1=head;
	Node *p2=head1;
	while(p1!=NULL){
		p1=p1->next;
		c++;
	}
	cout<<c<<" ";
	while(p2!=NULL){
		p2=p2->next;
		b++;
	}
	cout<<b;
	Node *n1=head;
	Node *n2=head1;
	int x=0;
	while(x<c-b){
		n1=n1->next;
		x++;}
	while(x>=c-b && x<c){
		//n1=n1->next;
		//n2=n2->next;
		if(n1->next==n2->next){
			cout<<"Y exist";
			break;
		}
		else{
		n1=n1->next;
		n2=n2->next;		
		x++;
	}
}
}
