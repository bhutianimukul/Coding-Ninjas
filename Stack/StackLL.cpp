#include<iostream>
using namespace std;
template <typename T>
class Node {
public:
		  T data;
		  Node<T> * next;
		  Node(T data){
		  this->data=data;
					 next=NULL;}
};
template<typename T>
class Stack{
		  Node <T>*head;
		 public:
		 Stack(){
					 head=NULL;
		  }
		  void push(T x){
					 Node<T> * temp=new Node<T>(x);
					 temp->next=head;
					 head=temp;
		  }
		  T pop(){
					 Node<T> * temp=head;
					 head=temp->next;
					 T y=temp->data;
					 delete(temp);
					 return y;
		  }
		  int size(){
					 Node<T> * temp=head;
					 int count=0;
					 while(temp!=NULL){
								temp=temp->next;
								count++;
					 } return count;
		  }
		  T peak(){
					 return head->data;
		  }
		  void display(){
		Node<T> * temp=head;
		while(temp!=NULL){
								cout<<temp->data<<" ";
								temp=temp->next;}
					 cout<<"\n";}


};
