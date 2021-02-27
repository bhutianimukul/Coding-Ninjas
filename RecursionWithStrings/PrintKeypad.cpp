#include<iostream>
using namespace std;
string getChar(int n){
	if(n==2) return "abc";
	if(n==3) return "def";if(n==4) return "ghi";if(n==5) return "jkl";if(n==6) return "mno";
	if(n==7) return "pqrs";
     if(n==8) return "tuv";
     if(n==9) return "wxyz";

     return " ";}
void keyPad(int n, string output){
if(n==0) {
	cout<<output<<"\n";
	return;}
string small=getChar(n%10);
for(int i=0;i<small.size();i++){

  keyPad(n/10, small[i]+output);
}
}

int main(){
int n=23;
string output="";
keyPad(n,output);

}