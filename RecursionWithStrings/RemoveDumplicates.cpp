#include<iostream>
using namespace std;
void remove(char arr[],int n){
	if(n==0) return ;
if(arr[0]==arr[1]) for(int i=0;i<n;i++) 	arr[i]=arr[i+1];
remove(arr+1,n-1);

}
int main(){

char arr[]="aabccba";
remove(arr,7);
cout<<arr;
}