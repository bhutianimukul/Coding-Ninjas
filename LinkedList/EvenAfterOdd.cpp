#include<iostream>
#include "LinkedList.cpp"
//#include "LengthRecursive.cpp"

using namespace std;
Node *EvenOdd(Node * head){
Node * even = NULL;
Node * odd=NULL;
Node* temp=NULL;
Node *oddTemp=NULL;
while(head!=NULL){

	if((head->data)%2==0){
		if(even==NULL){
			even=head;
			temp=head;
		}else{
		temp->next=head;
		temp=temp->next;
}
head=head->next;
	}else{
			if(odd==NULL){
			odd=head;
			oddTemp=head;
		}else{
		oddTemp->next=head;
		oddTemp=oddTemp->next;
			
		}
		head=head->next;
	}
}
oddTemp->next=NULL;
temp->next=NULL;
oddTemp->next=even;
return odd;

}


int main(){
	Node * head=NULL;
	head=takeInputImproved();
head= EvenOdd(head);

print(head);

	
}