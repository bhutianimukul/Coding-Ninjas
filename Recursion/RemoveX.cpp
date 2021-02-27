#include<iostream>
#include<math.h>
using namespace std;
void remX(char arr[],int n){
if(n==0) return ;
if(arr[0]=='x'){
for(int i=1;i<n;i++){
	arr[i-1]=arr[i];
}
arr[n-1]='\0';
remX(arr,n-1);
}else{
	remX(arr+1,n-1);
}
}
int main(){
char arr[]="aaaxx";
remX(arr,5);

cout<<arr;
}