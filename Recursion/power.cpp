#include<iostream>
using namespace std;
int power(int m , int n){
if(n==0) return 1;
int smalloutput=power(m,n-1);
return smalloutput *m;
}
int main(){
cout<<power(5,2);
}