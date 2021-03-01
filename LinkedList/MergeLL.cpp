#include<iostream>
//#include "LinkedList.cpp"
#include "LengthRecursive.cpp"

using namespace std;

Node * merge(Node *head1, Node * head2){
Node * dummy=new Node(0);
Node * res=dummy;
while(head1!=NULL && head2!=NULL){
if(head1->data<head2->data){
	dummy->next=head1;
	dummy=dummy->next;
	head1=head1->next;
}else{
		dummy->next=head2;
	dummy=dummy->next;
	head2=head2->next;
}
}
while(head1!=NULL){
	dummy->next=head1;
	head1=head1->next;
	dummy=dummy->next;
}
while(head2!=NULL){
	dummy->next=head2;
	head2=head2->next;
	dummy=dummy->next;
}
return res->next;
}
// int main(){
// 	Node * head1=NULL;
// 	Node *head2=NULL;
// 	cout<<"Enter head1 data\n";
// 	head1=takeInputImproved();
// 		cout<<"Enter head2 data\n";
// 	head2=takeInputImproved();
	
// 	head1 =merge(head1, head2);
// 	print(head1);

	
// }