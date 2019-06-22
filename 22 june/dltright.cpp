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

void deletright(Node **head){

  Node* current = (*head);
  if(current == NULL || current->next == NULL)
    return ;

  Node* prev = NULL, *next = NULL, *temp = NULL;
  while(current->next != NULL)
  {
    next = current->next;
    temp = next;
    /* check if there is any element greater than current */
    while(temp->next != NULL) {
        if (temp->data > current->data) {
            /* 
             * if some element is greater than current, then
             * delete current element
             */
            delete(current);
            current = NULL;
            if (prev == NULL) {
                /* it was the first element, need to update the head */
                *head = next;
            } else {
                prev->next = next;
            }
            break;
        }
        temp = temp->next;
    }
    /* if current element was not deleted */
    if (current != NULL) {
        prev = current;
    }
    current = next;
  }
}
int main(){
	Node *head=NULL;
	insert(&head,10);
	insert(&head,30);
	insert(&head,23);
	insert(&head,25);
	insert(&head,27);
	insert(&head,35);
	deletright(&head);
	Node *t=head;
	cout<<"after deleting right nodes \n";
	while(t!=NULL){
		cout<<t->data<<" ";
		t=t->next;
		}
	
}
