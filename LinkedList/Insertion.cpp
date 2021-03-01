#include<iostream>
//#include "LinkedList.cpp"
#include "LengthRecursive.cpp"

using namespace std;
Node *insertNode(Node *head, int data, int index){
	if(index>length(head)){ cout<<" head is larger than the length"; return NULL;}
Node * temp=head;
Node *n=new Node(data);
if(index==0){

n->next=head;
head=n;
return head; 

}
int count=0;
while(temp!=NULL){
	if(count==index-1){
		break;
	}
	temp=temp->next;
	count++;
}
n->next=temp->next;
temp->next=n;
return head;

}
Node* deleteNode(Node *head, int index){
	if(index>=length(head)){ cout<<" index is larger than the length"; return NULL;}
Node * temp=head;
Node * dummy=NULL;
if(index==0){
dummy=head;
head=head->next;
free(dummy);
return head;

}
int count=0;
while(temp!=NULL){
	if(count==index-1){
		break;
	}
	temp=temp->next;
	count++;
}
 dummy=temp->next;
 temp->next=temp->next->next;
 free(dummy);
 return head;

}

// int main(){
// 	Node * head=NULL;
// 	head=insert(head ,  5 , 0);
// 	head=insert(head ,  10 , 1);
// 	head=insert(head ,  20 , 2);
// 	head=deleteNode(head, 2);
// 	print(head);
	
// }