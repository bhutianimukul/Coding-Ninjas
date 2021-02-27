#include<iostream>
using namespace std;
void subset(int arr[], int n , int output[100], int sum, int elements){
if(n==0){
	if(sum==0){
		for(int i=0;i<elements;i++){
			cout<<output[i]<<" \t";
		}
		cout<<"\n";
	}
	return ;
}


int newOutput[elements+1];
for(int i=0;i<elements;i++){
	newOutput[i]=output[i];
}

newOutput[elements]=arr[0];
subset(arr+1, n-1, newOutput, sum-arr[0],elements+1);
subset(arr+1,n-1,output,sum,elements);




}
int main(){


	int arr[]={1,2,3,0};
	int output[100];
subset(arr, 4,output, 3,0);
	
}