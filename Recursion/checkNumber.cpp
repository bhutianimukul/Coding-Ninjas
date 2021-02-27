#include<iostream>
using namespace std;
bool check(int *arr,int n ,int k){

	if(n==0) return false;
	if(arr[n-1]== k) return true;
	return check(arr, n-1, k);
}
int main(){

	int arr[]={1,3,10,10,10,10,10};
	int n=7;
	cout<<check(arr,n,3);
}