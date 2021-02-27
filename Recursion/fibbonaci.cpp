#include<iostream>
using namespace std;
int fibbonaci(int n){
	if(n==0) return 0;
if(n==1) return 1;
	int smalloutput1=fibbonaci(n-1);
	int smalloutput2=fibbonaci(n-2);
	return smalloutput1+smalloutput2;
}
int main()
{ cout<<fibbonaci(3);

}