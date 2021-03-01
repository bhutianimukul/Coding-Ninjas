#include<iostream>
#include<string.h>
using namespace std;

class Student{
	public:
	int age;
char *name;
	public:
Student(const Student &s){

this->age=s.age;
//this.name=s.name; // shallow copy
////deep copy

this->name=new char[strlen(s.name)+1]; // +1 for null character
strcpy(this->name, s.name);
}
Student(int age, char *name){
this->age=age;
//this->name=name;
this->name=new char[strlen(name)+1];
strcpy(this->name,name);
}
void display(){
cout<<name;
cout<<" " <<age;
}
};
