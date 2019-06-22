#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
	int val;
	struct node *next;
};
typedef struct node nd;
void printlist(nd *hd){
	nd *ptr;
	ptr=(nd *)malloc(sizeof(nd));
	
	ptr=hd;
	while(ptr->next!=NULL){
		printf("%d",ptr->val);
		ptr=ptr->next;
	}
	printf("%d->NULL",ptr->val);
	
}
int main(){
	nd *p;
	p=(nd *)malloc(sizeof(nd));
	printlist(p);
	
}
