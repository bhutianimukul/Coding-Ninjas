#include<iostream>
using namespace std;
class DynamicArray{
	int *data;
	int nextIndex;
	int capacity;
	public:
	DynamicArray(){
		data=new int[5];
		nextIndex=0;
		capacity=5;
	}
	void add(int element){
		if(nextIndex==capacity){
			int *newData=new int[2*capacity];
			for(int i=0;i<capacity;i++) newData[i]=data[i];
			delete[] data;
			data=newData;
			capacity=capacity*2;
		}
		data[nextIndex]=element;
		nextIndex++;

	}

	DynamicArray (const DynamicArray &d){     // copy deep Copying
		int* newData=new int[d.capacity];
		for(int i=0;i<d.nextIndex;i++) newData[i]=d.data[i];

		data=newData;
		capacity=d.capacity;
		nextIndex=d.nextIndex;

	}
	void operator=(const DynamicArray &d){
		int* newData=new int[d.capacity];
		for(int i=0;i<d.nextIndex;i++) newData[i]=d.data[i];

		data=newData;
		capacity=d.capacity;
		nextIndex=d.nextIndex;



	}
	void print(){
		for(int i=0;i<nextIndex;i++){
			cout<<data[i]<<"	";
		}
		cout<<endl;

	}
	int get(int i){
		if(i<nextIndex) return data[i];
		else return -1;
	}
	void add(int i , int element){

		if(i>nextIndex) return ;
		else if(i==nextIndex) {
			add(element);
		}else{
			data[i]=element;	}
	}
};
