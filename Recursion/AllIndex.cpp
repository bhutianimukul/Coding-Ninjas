#include<iostream>
using namespace std;

int allIndex(int *arr, int n ,int k,int res[]){
	if(n==0) return 0;
	int ans=allIndex(arr,n-1,k,res);
	if(arr[n-1]==k){
		res[ans]=n-1;
		return ans+1;}
	return ans;}
int main(){

int arr[]={6,6,6,6};
int res[]={0};
int  length=allIndex(arr, 4,6,res);

for(int i=0;i<length;i++){
	cout<<res[i]<<" ";
}
}