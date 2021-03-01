#include<iostream>
//#include "LinkedList.cpp"
#include "LengthRecursive.cpp"

using namespace std;
Node* getMid(Node *head){
Node * fast=head;
Node * slow=head;
while(fast->next!=NULL && fast->next->next!=NULL){
fast=fast->next->next;
slow=slow->next;
}
return slow;
}
Node * reverse(Node * head){
	Node* q=NULL , *p=head;
while(p->next!=NULL){
	Node * dummy=p->next;
	p->next=q;
	q=p;
	p=dummy;
}
p->next=q;
head=p;
return head;
}


bool pallindrome(Node * head){
	Node* mid=getMid(head);
Node * temp=mid->next;
mid->next=NULL;
temp=reverse(temp);
Node *p=head;
while(temp!=NULL){
	if(p->data!=temp->data) return  false;
	p=p->next;
	temp=temp->next;
}
return true;
}


// int main(){
// 	Node * head=NULL;
// 	head=takeInputImproved();
// cout<<pallindrome(head)<<"\n";
// }