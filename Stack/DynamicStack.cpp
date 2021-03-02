#include<iostream>
#include<climits>

using namespace std;
class Stack{
		  int * data;
		  int top;
		  int capacity;
		  public:
		  Stack(){
					 data=new int[4];
					 top=-1;
					 capacity=4;
		  }
		  int size(){
					 return top+1;
		  }
		  bool isEmpty(){
					 if(top==-1)return true;
					 else return false;
		  }
		  void push(int element){
					 if(top==capacity-1){ 
int *arr=new int[2*capacity];
for(int i=0;i<capacity;i++){
arr[i]=data[i];}
delete[] data;
data=arr;
capacity=capacity*2;


					 }
					top++;
					data[top]=element;
		  }

		  int pop(){
					 if(top==-1) {cout<<"Stack Empty"; return INT_MIN;}
					 int value=data[top];
					 top=top-1;
		return value;
		  }
		  int peak(){
					 if(top==-1){cout<<"Stack Empty"; return INT_MIN;}
					 return data[top];
		  }
};








