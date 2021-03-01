#include<iostream>
//#include "LinkedList.cpp"
#include "LengthRecursive.cpp"

using namespace std;
void printReverse(Node * head){

if(head==NULL) return ;
printReverse(head->next);
cout<<head->data<<"\t";

}


int main(){
	Node * head=NULL;
	head=takeInputImproved();
printReverse(head);
//	print(head);

	
}