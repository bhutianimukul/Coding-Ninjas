#include<iostream>
#include<climits>

using namespace std;
class StackArray{
		  int * data;
		  int top;
		  int capacity;
		  public:
		  StackArray(int totalSize){
					 data=new int[totalSize];
					 top=-1;
					 capacity=totalSize;
		  }
		  int size(){
					 return top+1;
		  }
		  bool isEmpty(){
					 if(top==-1)return true;
					 else return false;
		  }
		  void push(int element){
					 if(top==capacity-1){ cout<<"Stack Full"; return ;}
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
