#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node *next;
Node(int data){
	this->data=data;
	next=NULL;
}
};
Node *takeInput(){
	Node * head=NULL;
	int data;
	cin>>data;
while(data!=-1){
	Node *n=new Node(data);
	if(head==NULL){
		head=n;
	}
	else{
		Node *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=n;
	}
	cin>>data;
}
return head;
}
Node *takeInputImproved(){
	Node * head=NULL;
	Node *tail=NULL;
	int data;
	cin>>data;
while(data!=-1){
	Node *n=new Node(data);
	
	if(head==NULL){
		head=n;
		tail=n;
	} 
	else{
		tail->next=n;
		tail=tail->next;
	}
	cin>>data;
}
return head;
}
void print(Node *head){

while(head!=NULL){
	cout<<head->data<<"\t";
	head=head->next;
}

}
// int main(){
// Node *head=takeInputImproved();
// print(head);
// }