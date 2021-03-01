#include<iostream>
//#include "LinkedList.cpp"
#include "LengthRecursive.cpp"

using namespace std;
Node * duplicates(Node * head){
	if(head==NULL || head->next==NULL) return head;
if(head->data==head->next->data){
	Node *temp=head;
	head=head->next;
	free(temp);
return 	duplicates(head);
}
else{


Node * newhead=duplicates(head->next);
head->next=newhead;
return head;
}
return head;
}


int main(){
	Node * head=NULL;
	head=takeInputImproved();
	head=duplicates(head);
	print(head);

	
}