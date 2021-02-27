#include<iostream>
#include<math.h>
using namespace std;
bool checkPal(char arr[],int start ,int end){
	if(arr[0]=='\0' || arr[1]=='\0') return true;
//if(end-start+1==0) return true;

if(start>=end)return true;

if(arr[start]!=arr[end]) return false;

bool check=checkPal(arr,start+1,end-1);
return check;
}
int main(){
char arr[]="namana";
cout<<checkPal(arr,0,5);

}