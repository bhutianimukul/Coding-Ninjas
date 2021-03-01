
#include<iostream>
#include "LinkedList.cpp"

Node *deleteAfter(Node *head, int m ,int n){
	// Node * temp=head;
	// Node* q=NULL;
	// while(temp!=NULL){
	// while(temp!=NULL && m!=0){
	// 	q=temp;
	// 	temp=temp->next;

	// 	m--;}
	// 	cout<<" TempData\t"<<temp->data<<" \n";
	// 	Node * t=temp;
	// 	for(int i=0;i<n;i++){
	// 		t=deleteNode(t,i);
	// 	}
	// 	temp=
	// }
	// 	q->next=t;
	// 	return head;
Node * curr= head;
while(curr){
// skipping m nodes
int count=1;
		while(curr!=NULL && count<m){

		curr=curr->next;

		count++;}


		if(curr==NULL) return head;
		// next node will be after m th node
		Node * temp=NULL;
		if(m>0)  temp=curr->next;

		count=0;
		while(temp!=NULL && count!=n){
			Node *t=temp;
			temp=temp->next;
			free(t);
			count++;
		}
		if(m>0){
		curr->next=temp;
		curr=temp;}




}




return head;




}

int main(){
	Node * head=NULL;
	head=takeInputImproved();

print(head );
cout<<"\n";
int m ;
int n;
cin>>m>>n;
head=deleteAfter(head, m , n);
print(head);
}
