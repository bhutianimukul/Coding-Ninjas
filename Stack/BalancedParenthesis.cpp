#include<iostream>
#include<stack>
#include<map>
using namespace std;
bool compare(char a , char b){
if( a== '{'&&  b=='}') return true;

if(a== '('&&  b==')') return true;

if( a== '['&&  b==']') return true;
return false;
}


bool balancing(string str, stack<char> st){
//map<char, char> m{('{' , '}') ,  ('[',']'), ('(', ')') };

  std::map<char, char> m {
            {'[', ']'},
            {'{','}'},
            {'(', ')'},
        };
for(int i=0;i<str.size();i++){
//cout<<str[i];
if(str[i]=='{'|| str[i]=='[' || str[i]=='(') st.push(str[i]);
else  if(str[i]==']'|| str[i]=='}' || str[i]==')'){
if(st.size()==0) return false;
char peak=st.top();
if(m[peak]==str[i]){
//cout<<peak<<" "<< str[i] <<"\n";
st.pop();
}else return false;

}


}
if(st.size()==0) return true;
return false;

}
int main(){
//enum e{ '{', '[' , '(' }

stack <char> st;
string str;
cout<<"Enter String\n ";
getline(cin,str);
cout<<balancing(str,st); 




}
