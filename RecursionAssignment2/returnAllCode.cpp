#include<iostream>
using namespace std;
int returnCode(string s , string output[]){
	if(s.length()==0){
		output[0]="";
		return 1;
	}
	string temp1[100];
	string temp2[100];
	int a=s[0]-'0';
	char ch='a'+a-1;
	int length1=returnCode(s.substr(1),temp1);
int length2=0;
for(int i=0;i<length1;i++){ output[i]=ch+temp1[i];}
if(s.length()>1){
	if(stoi(s.substr(0,2))<=26){
}
int a=stoi(s.substr(0,2));
//cout<<"a\n"<<a;
char ch=a+ 'a' -1;
length2=returnCode(s.substr(2),temp2);
for(int i=0;i<length2;i++){
	output[i+length1]=ch+temp2[i];
}

}
	

	return length1+length2;
}

int main(){
string s="1123";
string output[100]={};
int length=returnCode(s,output);

for(int i=0;i<length;i++){
	cout<<output[i]<<" ";
}


}