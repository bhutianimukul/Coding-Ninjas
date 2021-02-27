#include<iostream>
using namespace std;

void subset(int arr[], int output[], int n , int k){

if(n==0){
	for(int i=0;i<k;i++) cout<<output[i]<<"\t";
		cout<<"\n";
	return ;
}
subset(arr+1, output, n-1,k);
int newOutput[k+1];
for(int i=0;i<k;i++){
	newOutput[i]=output[i];
}
newOutput[k]=arr[0];
subset(arr+1, newOutput,n-1,k+1);

}int main(){

	int arr[]={1,2,3};
	int output[]={};

subset(arr,output, 3,0);
	
}