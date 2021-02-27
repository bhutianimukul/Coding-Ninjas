#include<iostream>
#include<math.h>
using namespace std;
void tower(char source, char helper , char destination, int n){
if(n==1){
	cout<<"Moved disk from "<<source<<" to "<<destination<<" \n";
	return;
}tower(source , destination ,helper, n-1 );
	cout<<"Moved disk from "<<source<<" to "<<destination<<" \n";
tower(helper, source, destination,n-1);
}
int main(){
tower('A' , 'H', 'B',3);
}