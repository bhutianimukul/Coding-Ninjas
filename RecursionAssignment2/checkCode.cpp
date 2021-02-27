#include<iostream>
using namespace std;
bool checkCode(string s){
if(s.length()==0) return true;
bool flag=true;
flag=checkCode(s.substr(0,s.length()-1));
if(flag==true){

if(s[s.length()-1]!='a'|| s[s.length()-1]!='b') return false;
if(s[s.length()-1]=='a'){
	if(s.length()-1=='b'&&s.length()-2=='b') return true;
}
else{

	return flag;

}
}
return flag;


}
int main(){

string s="abb";
bool flag;
flag=checkCode(s);
cout<<flag;

}