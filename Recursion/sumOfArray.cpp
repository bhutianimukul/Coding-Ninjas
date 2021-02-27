#include<iostream>
using namespace std;
int sum(int arr[], int n){

	if(n==0) return 0;
 
int smalloutput=sum(arr, n-1);
return arr[n-1]+smalloutput;


}

int main(){

	int arr[]={1,3,10,10,10,10,10};
	int n=7;
	cout<<sum(arr,n);
}