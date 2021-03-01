#include<iostream>
//#include "LinkedList.cpp"
#include "LengthRecursive.cpp"

using namespace std;
Node * append(Node * head, int n){
Node * temp=head;
int count=1;
while(count!=n){
	temp=temp->next;
	count++;
}
Node * newhead=temp->next;

temp->next=NULL;
temp=newhead;
while(temp->next!=NULL){
	temp=temp->next;
}
temp->next=head;
return newhead;
}


int main(){
	Node * head=NULL;
	head=takeInputImproved();
int n =2;
n=length(head)-n;
if(n<0){
	cout<<"invalid";
}else{
	cout<<n<<"\t";
head=append(head, n);}
print(head);
	
}