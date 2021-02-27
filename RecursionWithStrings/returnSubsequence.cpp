#include<iostream>
using namespace std;
int sub(string input , string output[]){
if(input.size()==0){
	output[0]=" ";
	return 1;}	
	string smallinput=input.substr(1);
int smallOutputSize=sub(smallinput, output);
for(int i=0;i<smallOutputSize;i++){
	output[smallOutputSize+i]=input[0]+output[i];
}
return 2*smallOutputSize;
}
int main(){
string s="abc";
int n=3;
string arr[100]={};
int length=sub(s , arr);
for(int i=0;i<length;i++) cout<<arr[i]<<" ";
}