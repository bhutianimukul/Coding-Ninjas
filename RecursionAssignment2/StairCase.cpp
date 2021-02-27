#include<iostream>
using namespace std;

int stairWays(int n){
	if(n==0) return 1;
	if(n<0) return 0;
int x=stairWays(n-1);
int y=stairWays(n-2);
int z=stairWays(n-3);	
return x+y+z;
}

int main(){

	cout<<stairWays(2);
}