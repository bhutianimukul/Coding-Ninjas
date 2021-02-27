#include<iostream>
using namespace std;
int Binary(int arr[], int low,int high,int key){
//cout<<"low"<<low<<" ";
if(low<=high) {

	int mid=(low+high)/2;

	if(key>arr[mid]) return Binary(arr,mid+1,high,key);
	else if(key<arr[mid]) return Binary(arr,low,mid-1,key);
	else if(arr[mid]==key) return mid;
	



}
return -1;
}

int main(){

	int arr[]={1,2,3,4,5,6};
	cout<<Binary(arr,0,5,5);
}