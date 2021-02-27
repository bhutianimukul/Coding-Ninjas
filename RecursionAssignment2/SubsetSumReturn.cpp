#include<iostream>
using namespace std;
int subset(int arr[], int n , int output[100][100], int sum){
if(n==0){
	if(sum==0){
	output[0][0]=0;
	return 1;
}
return 0;
}
int output1[100][100];
int output2[100][100];
int length1=subset(arr+1,n-1 , output1, sum );

int length2=subset(arr+1,n -1, output2, sum -arr[0]);
//return merged array
for(int i=0;i<length1;i++){
	output[i][0]=output1[i][0]+1; // incrementing size
	output[i][1]=arr[0];           // adding 0th element
	for(int j=1;j<=output1[i][0];j++){
		output[i][j+1]=output1[i][j];

	}
}
	for(int i=0;i<length2;i++){
	output[i+length1][0]=output2[i][0]; //copying size       
	for(int j=1;j<=output2[i][0];j++){
		output[i+length1][j]=output2[i][j];


	}

}
return length1+length2;










}
int main(){


	int arr[]={1,2,3,0};
	int output[100][100];
	int length=subset(arr, 4,output, 3);
	for(int i=0;i<length;i++){
		for(int j=1;j<=output[i][0];j++){
cout<<output[i][j]<<" ";
		}cout<<"\n";
	}
}