#include<iostream>
#include "LinkedList.cpp"

using namespace std;
void printRec(Node *head , int index){
	if(head==NULL) return;
	if(index==0){
		cout<<head->data;
		return;
	}
	printRec(head->next, index-1);



}
int main(){
	Node * head=takeInputImproved();
	//print(head);
	printRec(head, 3);
}