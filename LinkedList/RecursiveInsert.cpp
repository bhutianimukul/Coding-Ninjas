#include<iostream>
//#include "LinkedList.cpp"
#include "LengthRecursive.cpp"

using namespace std;
Node* recInsert(Node* head , int data , int index){
	if(index>length(head)){
		cout<<"Invalid index\n";
		return head;
	}
if(head==NULL && index>0) return head;
if(index==0){

Node * n =new Node(data);
n->next=head;
head=n;
return head;
}
Node * tempHead=recInsert(head->next, data, index-1);
head->next=tempHead;
return head;

}
Node* recDelete(Node* head  , int index){
	if(index>=length(head)){
		cout<<"Invalid index\n";
		return head;
	}
	
if(head==NULL && index>0) return head;
if(index==0){

Node * temp=head;
head=head->next;
free(temp);
return head;
}
Node * tempHead=recDelete(head->next,  index-1);
head->next=tempHead;
return head;

}











int main(){
	Node * head=NULL;
	head=recInsert(head ,  5 , 0);
		
	head=recInsert(head ,  10 , 1);

	head=recInsert(head ,  20 , 2);
		
	head=recDelete(head, 2);
print(head);
	
}