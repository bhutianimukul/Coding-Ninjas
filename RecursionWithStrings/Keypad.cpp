#include<iostream>
using namespace std;
string getcharvalue(int n){
	if(n==2) return "abc";
	if(n==3) return "def";if(n==4) return "ghi";if(n==5) return "jkl";if(n==6) return "mno";
	if(n==7) return "pqrs";
     if(n==8) return "tuv";
     if(n==9) return "wxyz";

     return " ";

}
int keypad(int n , string output[]){
if(n>0 && n<10){
	string val=getcharvalue(n);
	for(int i=0;i<val.size();i++){
		output[i]=val[i];
	}return val.size();
}
int smalllength=keypad(n/10,output);
string smallinput=getcharvalue(n%10);
string newOutput[smalllength*smallinput.length()];
for(int i=0;i<smalllength;i++){
	for(int j=0;j<smallinput.size();j++){
		newOutput[j+smalllength*i]=output[i]+ smallinput[j]; // step important
	}
}
for(int i=0;i<smalllength*smallinput.size();i++) output[i]=newOutput[i];
return smallinput.size()*smalllength;

}
int main(){
int n=23;
string output[100]={};

int length=keypad( n , output);
for(int i=0;i<length;i++) cout<<output[i]<<" ";
}