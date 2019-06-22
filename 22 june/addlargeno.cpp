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
Node *add(Node *first,Node *second){
	Node *newlist=NULL;
	int sum,carry=0;
	Node *temp,*prev=NULL;
	while(first!=NULL || second!=NULL)
	{
		sum=carry+(first?first->data:0)+(second?second->data:0);
		carry=sum/10;
		sum=sum%10;
		insert(&newlist,sum);
		//temp=new Node();
		//temp->data=sum;
		//if(newlist==NULL){
			//newlist=temp;
		//}
		//else{
			//prev->next=temp;
		//}
		//prev=temp;
		if(first!=NULL)
			first=first->next;
		if(second!=NULL)
			second=second->next;
	}
	if(carry>0)
	{
		insert(&newlist,carry);
		//temp->next=new Node();
		//temp->next->data=carry;
	}
	return newlist;
}

int main()
{
	Node *head=NULL;
	Node *head1=NULL;
	Node *res=NULL;
	insert_front(&head,5);
	insert_front(&head,3);
	insert_front(&head,2);
	insert_front(&head,4);
	Node *t=head;
	cout<<"first list is";
	while(t!=NULL){
		cout<<t->data;
		t=t->next;
		
	}
	cout<<"\n";
	insert_front(&head1,8);
	insert_front(&head1,7);
	insert_front(&head1,3);
	insert_front(&head1,6);
	Node *t1=head1;
	cout<<"sec list is";
	while(t1!=NULL){
		cout<<t1->data;
		t1=t1->next;
		
	}
	cout<<endl;
	res=add(head,head1);
	//cout<<res;
	while(res!=NULL){
		cout<<res->data;
		res=res->next;
	}
	
}

