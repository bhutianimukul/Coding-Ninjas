#include<iostream>
using namespace std;
void printCode(string s , string output){
if(s.length()==0){
	cout<<output<<" ";
	return ;
}
string output1=output;
string output2=output;
string input1=s.substr(1);
int a=s[0]-'0';
	char ch='a'+a-1;
printCode(input1,output1+ch);
if(s.length()>1){
if(stoi(s.substr(0,2))<=26){
int a=stoi(s.substr(0,2));
string input2=s.substr(2);
	char ch='a'+a-1;
	printCode(input2,output2+ch);


}
}





}

int main(){
string s="1123";
string output="";
printCode(s,output);



}