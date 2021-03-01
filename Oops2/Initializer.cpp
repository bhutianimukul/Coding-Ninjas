#include<iostream>
using namespace std;
class Student{
	int age;
	const int rollNo;
	int & x; //refernce should also be initialized at allocation;
	public:
	Student(int rollNo, int a,int ab):rollNo(rollNo), age(a), x(ab) {         
		// this done after creation in the memory so constant can not be changed once allocated
		//	this->rollNo=rollNo;
cout<<rollNo;
cout<<age;
cout<<x;	}



};
