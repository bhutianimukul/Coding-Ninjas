#include<iostream>
//#include "LinkedList.cpp"
//#include "LengthRecursive.cpp"

#include "MergeLL.cpp"
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
Node * mergeSort(Node * head){
 if(head==NULL || head->next==NULL) return head;
 Node * mid=getMid(head);
Node * tempRight=mid->next;
mid->next=NULL;
Node *tempLeft=head;
 Node *left=mergeSort(tempLeft);
Node * right=mergeSort(tempRight);
Node *p =merge(left,right);
return p;

}

int main(){
 	Node * head1=NULL;
	Node *head2=NULL;
	cout<<"Enter head1 data\n";
	head1=takeInputImproved();

	
	head1 =mergeSort(head1);
	print(head1);


}