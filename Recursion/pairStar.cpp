#include<iostream>
#include<math.h>
using namespace std;
void pairStar(char arr[],int n){
if(n<=0) return;
if(arr[0]==arr[1]){
for(int i=n;i>1;i--){
	arr[i]=arr[i-1];
}
arr[n+1]='\0';
arr[1]='*';
pairStar(arr+2,n-1); // important step even if we have to jump twice but array size iss getting cut by one only
}else{
	pairStar(arr+1,n-1);
}
}
int main(){
char arr[100]="xxxxff";
pairStar(arr,6);

cout<<arr;
}