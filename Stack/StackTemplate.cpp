#include<iostream>
#include<climits>

using namespace std;
template <typename T>
class StackArray{
		  T * data;
		  int top;
		  int  capacity;
		  public:


		  StackArray(int totalSize){
					 data=new T[totalSize];
					 top=-1;
					 capacity=totalSize;
		  }
		  int  size(){
					 return top+1;
		  }
		  bool isEmpty(){
					 if(top==-1)return true;
					 else return false;
		  }
		  void push(T element){
					 if(top==capacity-1){ cout<<"Stack Full"; return ;}
					 top++;
					 data[top]=element;
		  }

		  T pop(){
					 if(top==-1) {cout<<"Stack Empty"; return 0;}
					 T value=data[top];
					 top=top-1;
					 return value;
		  }
		  T peak(){
					 if(top==-1){cout<<"Stack Empty"; return 0;}
					 return data[top];
		  }
};

