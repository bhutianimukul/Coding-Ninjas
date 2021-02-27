#include<iostream>
using namespace std;

int firstIndex(int *arr, int n ,int k){
if(n==0) return -1;
if(arr[0]==k) return 0;
int ans=firstIndex(arr+1, n-1,k);
if(ans==-1) return -1;
else return ans+1;
return 0;

}


int main(){

int arr[]={2,3,2,6};
cout<<firstIndex(arr, 4,2);

}