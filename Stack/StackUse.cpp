#include<iostream>
#include"StackLL.cpp"
using namespace std;
int main(){
		  Stack <char>s ;
		  s.push(100);
		  s.push(101);
s.push(102);
s.push(111);
cout<<"size"<<s.size()<<"\t";
cout<<" "<< s.peak()<<"\n";
s.pop();


cout<<" "<< s.peak()<<"\n";
s.pop();
s.display();

}
