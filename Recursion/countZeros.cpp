#include<iostream>
using namespace std;
int count(int n){
	if(n==0) return 0;
	int smalloutput=count(n/10);
	if(n%10==0) return smalloutput+1;
	return smalloutput;

}
int main(){
	
	int n=809080;
	cout<<count(n);

}