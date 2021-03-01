#include<iostream>
#include "Fraction.cpp"
using namespace std;
int main(){
	Fraction f1(10, 3);
	Fraction f2(5, 2);
	//	Fraction f3=f1.add(f2);
	//	Fraction f4=f1*f2;
	//f1.multiply(f2);
	//	Fraction f5=f2*f1;
	//	f4.print();
	//	cout<<f2.getNumerator();
	//	bool b=f4==f5;
	//	cout<<b;
	// ++ f1;
	// f1.print();


 
//	++(++f1);
//	f1.print();// output received is 3/2 but instead of 3/2 there should be 1 more updation
	// it is happening because  fun is returning copy of f1 but the updation is done on bufffer to avoild return by reference

	(f1+=f2)+=f2;
	f1.print();
	f2.print();
} 
