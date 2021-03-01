#include<iostream>
#include "DynamicArray.cpp"
int main(){
DynamicArray d1;
d1.add(10);
d1.add(20);
d1.add(30);
d1.add(40);
d1.add(60);
d1.add(70);
d1.print();
DynamicArray d2(d1);
DynamicArray d3;
	d3=d1; // it also do shallow copy to copy deep overloaded
d2.add(0,33);
d3.add(1, 3333);
d1.print();
d2.print();
d3.print();


}
