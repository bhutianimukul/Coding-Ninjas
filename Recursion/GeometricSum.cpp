#include<iostream>
#include<math.h>
using namespace std;
double geometricSum(int k){
	//cout<<k<<" ";
if(k==0) return 1;
double smallOutput=geometricSum(k-1);
//cout<<"small"<<smallOutput;
return smallOutput+pow(2,-k);
}
int main(){

cout<<geometricSum(5);

}