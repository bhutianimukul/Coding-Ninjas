#include<iostream>
using namespace std;
int sum(int n){
	if(n==0) return 0;
	int smallOutput=sum(n/10);
	return smallOutput+n%10;
}
int main(){
	
	int n=12345;
	cout<<sum(n);

}