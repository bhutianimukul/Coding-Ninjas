#include<iostream>
#include<math.h>
using namespace std;

int parse(char s[],int n){
if(n==0) return 0;
int smallOutput=parse(s+1,n-1);
return (s[0]-'0')*pow(10,n-1)+smallOutput;
}
int main(){
char arr[]="12345";
cout<<parse(arr,5);

}