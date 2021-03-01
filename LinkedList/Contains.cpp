#include<iostream>
//#include "LinkedList.cpp"
#include "LengthRecursive.cpp"

using namespace std;
int contains(Node *head , int data){
	if(head==NULL) return -1;
if(head->data==data){
	data=-1;
	return 0;
}
int smallLength=contains(head->next, data);
int result;
return smallLength==-1? result= -1: result=smallLength+1;
return result;
}


int main(){
	Node * head=NULL;
	head=takeInputImproved();
print(head);
int search;
cin>>search;
cout<<" index" <<contains(head, search);
	
}