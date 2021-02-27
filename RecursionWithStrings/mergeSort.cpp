#include<iostream>
using namespace std;
void merging(int arr[], int low, int high , int mid){
int n1=mid-low+1;
int n2=high-mid;
int i=low;

int j=mid+1;

int c[n1+n2];
int k=low;
while(i<=mid && j<=high){

	if(arr[i]<=arr[j]){
		c[k]=arr[i];
		k++;
		i++;
	}else{
		c[k]=arr[j];
		k++;
		j++;
	}
}
while(i<=mid){
	c[k++]=arr[i];
		i++;
	}while(j<=high){
	c[k++]=arr[j];
		j++;
}
for(int cj=low;cj<n1+n2;cj++){
	arr[cj]=c[cj];

}



}
void mergeSort(int arr[], int low, int high){
if(low>=high) return ;
int mid=(high+low)/2;
mergeSort(arr, low,mid);
mergeSort(arr, mid+1, high);
merging(arr,low,high, mid);
}
int main(){
	int arr[]={ 1,5,3,6};
		for(int i=0;i<4;i++) cout<<arr[i]<<" ";
			cout<<"\n";
	mergeSort(arr, 0, 3);
	for(int i=0;i<4;i++) cout<<arr[i]<<" ";
}