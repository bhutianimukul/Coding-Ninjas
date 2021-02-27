#include<iostream>
using namespace std;
void replace(char arr[], char a , char b, int n){
if(n==0) return ;
 if(arr[0]==a){
 	arr[0]=b;
 }
 replace(arr+1, a, b, n-1);
}
int main(){

char arr[]="abacd";
replace(arr, 'a','x',5);
cout<<arr;
}