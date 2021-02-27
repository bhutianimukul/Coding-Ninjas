#include<iostream>
using namespace std;
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
int partition(int arr[], int si, int ei){

int pivot=arr[si];
int count=0;
for(int i=si;i<=ei;i++){
	if(arr[i]<pivot) count++;
}
swap(&arr[si], &arr[si+count]);
int i=si;
int j=ei;
while(i<j){
	if(arr[i]>=pivot && arr[j]<pivot) {
		swap(&arr[i], &arr[j]);
		i++;
		j--;
	}
	else if(arr[j]>pivot) j--;
	else i++;
}





return si+count;
}

void QuickSort(int arr[],int si,int ei){


if(ei<=si) return;
else{

	int pivot_index=partition(arr,si,ei);
	QuickSort(arr,si,pivot_index-1);
	QuickSort(arr,pivot_index+1,ei);
}
}
int main(){

	int arr[]={5,3,7,2,6,4};
QuickSort(arr,0,5);
	for(int i=0;i<6;i++){
		cout<<arr[i]<<"\t";
	}
}