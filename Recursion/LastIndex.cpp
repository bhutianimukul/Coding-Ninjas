#include<iostream>
using namespace std;

int lastIndex(int *arr, int n ,int k){
if(n==0) return -1;
if(arr[n-1]==k) return n-1;
int ans=lastIndex(arr,n-1,k);
return ans;
}


int main(){

int arr[]={6,6,6,6};
cout<<lastIndex(arr, 4,6);

}