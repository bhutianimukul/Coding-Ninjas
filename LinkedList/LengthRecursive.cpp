#include<iostream>
#include "LinkedList.cpp"

using namespace std;
int length(Node * head){
if(head==NULL) return 0;
int smallLength= length(head->next);
return smallLength+1;
}
// int main(){
// 	Node * head=takeInputImproved();
// 	//print(head);
// 	cout<<" "<<length(head);
// }