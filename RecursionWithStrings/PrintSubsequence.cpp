#include<iostream>
using namespace std;
void sub(string input, string output){
if(input.size()==0){
	cout<<output;
	cout<<"\n";
return ;}
sub(input.substr(1), output);
sub(input.substr(1), output+input[0]);
}

int main(){
string input="abc";
string output="";
sub(input,output);

}