#include<iostream>
using namespace std;
int binary(int arr[], int low, int high , int key){

	if(high>=low  ){
	int mid=low+(high-low)/2;
	
	if(arr[mid]==key){
		return mid;
	}
	 if(arr[mid]>key) return  binary(arr, low, mid-1,key);
	
	return binary(arr, mid+1, high,key);
}
return -1;
}
int search(int arr[], int n , int k){


	return binary(arr, 0 , n-1, k);
}
int main(){

	int arr[]={1,2,3,4};
cout<<	search(arr, 4, 1);
}