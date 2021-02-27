#include<iostream>
using namespace std;
void print(int n){
	if(n==1){
		cout<<"1"<<"\n";
		return ;
	}
	print(n-1);
	cout<<n<<"\n";

}
int main(){
	print(5);
}