#include<iostream>
using namespace std;
int multiply(int m , int n){
	if(n==1) return m;
	int smallOutput=multiply(m,n-1);
	return smallOutput+m;
}
int main(){
	int m=5;
	int n=8;
	cout<<multiply(m,n);

}