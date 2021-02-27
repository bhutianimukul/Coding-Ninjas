#include<iostream>
using namespace std;

int permutation(string s , int n , string output[]){

if(n==0){
	output[0]=" ";
	return 1;
}
int k=0;
for(int i=0;i<n;i++){
	char ch=s[i];
string left=s.substr(0,i);
string right=s.substr(i+1, n);
string temp[100];
	int length=permutation(left+right, n-1, temp);
	for(int i=0;i<n;i++){
    output[k++]=ch+temp[i];


	}
}
return k;

}




int main(){
string s="abc";
string output[100]={};
int length=permutation(s, 3, output);
for(int i=0;i<length;i++) cout<<output[i]<<" ";



}