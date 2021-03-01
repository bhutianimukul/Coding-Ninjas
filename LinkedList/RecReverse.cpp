
#include<iostream>
#include "LinkedList.cpp"
//#include "LengthRecursive.cpp"


Node * reverse(Node * head){
if(head==NULL|| head->next==NULL) return head;

Node *newHead=reverse(head->next);
Node * temp=newHead;
while(temp->next!=NULL) temp=temp->next;
temp->next=head;
head->next=NULL;
return newHead;


}

int main(){
	Node * head=NULL;
	head=takeInputImproved();
head=reverse(head);
print(head );
}