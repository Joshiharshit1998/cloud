
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
	int val;
	struct node *next;
};
typedef struct node nd;
void insert(nd *head,int value){
	nd *tmp;
	tmp=(nd*)malloc(sizeof(nd));
	tmp->val=value;
	tmp->next=NULL;
	if(head==NULL){
		head=tmp;
		return;
	}
	nd *ptr;
	ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=tmp;
	return;
}
int main(){
	nd *temp,*hd,*q;
	temp=(nd*)malloc(sizeof(nd));
	temp->val=10;
	hd=temp;
	insert(hd,20);
	insert(hd,30);
	insert(hd,40);
	q=hd;
	while(q!=NULL){
		printf("%d",&q->val);
		q=q->next;
	}
	}




