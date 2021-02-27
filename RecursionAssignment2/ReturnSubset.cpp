#include<iostream>
using namespace std;
// int subset(int arr[], string output[], int n){
// if(n==0){
// 	output[0]=" ";
// 	return 1;}
// int smallLength=subset(arr, output, n-1);
// for(int i=0;i<smallLength;i++){
// 	output[smallLength+i]=output[i]+to_string(arr[n-1]);
// }
// return 2*smallLength;
// }
int subset2(int arr[], int output[100][100], int n){
if(n==0){
	output[0][0]=0;
	return 1;}
int length1=subset2(arr+1,output, n-1);
for(int i=0;i<length1;i++){
	output[i+length1][0]=output[i][0]+1; // incrementing size
	output[i+length1][1]=arr[0];           // adding 0th element
	for(int j=1;j<=output[i][0];j++){
		output[i+length1][j+1]=output[i][j];

	}
}

return 2*length1;
}

int main(){

	int arr[]={1,2,3};
	//string output[100]={};
int output[100][100];
	int length=subset2(arr,output, 3);
	for(int i=0;i<length;i++){
		for(int j=1;j<=output[i][0];j++){
cout<<output[i][j]<<" ";
		}cout<<"\n";
	}
}