#include<iostream>
#include<math.h>
using namespace std;
void pi(char arr[],int n){
	if(n==1) return ;
if(arr[0]=='p' && arr[1]=='i'){
	arr[0]='3';
arr[1]='.';
arr[n+2]='\0';
for(int i=n-1;i>1;i--){

	arr[i+2]=arr[i];
}
arr[2]='1';
arr[3]='4';
}

pi(arr+1,n-1);

}
int main(){
char arr[100]="3pi3";
pi(arr,4);
cout<<arr;
}