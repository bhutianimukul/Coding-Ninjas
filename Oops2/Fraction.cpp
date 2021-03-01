#include<iostream>
using namespace std;
class Fraction{
	int numerator;
	int denominator;
	public:
	Fraction(int num, int den ){
		numerator=num;
		denominator=den;
	}
	void print(){
		cout<<numerator<<"/"<<denominator<<"\n";

	}

	void simplify(){
		int hcf=1;
		int j=min(numerator, denominator);
		for(int i=1;i<=j;i++){
			if(numerator%i==0 && denominator%i==0)    hcf=i;

		}
		numerator=numerator/hcf;
		denominator=denominator/hcf;
	}
	/*	void add(const Fraction &f2){
		int lcm=denominator *f2.denominator;
		int x=(numerator*lcm/denominator);
		int y=	(f2.numerator*lcm/f2.denominator);
		numerator=x+y;
		denominator=lcm;
		simplify();
		}*/	Fraction add(const Fraction &f2){

			int lcm=denominator *f2.denominator;
			int x=(numerator*lcm/denominator);
			int y=	(f2.numerator*lcm/f2.denominator);
			int 	num=x+y;
			Fraction fnew(num,lcm);
			fnew.simplify();
			return fnew;

		}
Fraction operator+(const Fraction &f2) const {

	int lcm=denominator *f2.denominator;
	int x=(numerator*lcm/denominator);
	int y=	(f2.numerator*lcm/f2.denominator);
	int 	num=x+y;
	Fraction fnew(num,lcm);
	fnew.simplify();
	return fnew;
}

void multiply(const Fraction &f2){
	numerator=numerator*f2.numerator;
	denominator=denominator*f2.denominator;
	simplify();
}
Fraction operator*(const Fraction &f2)const{
	int num=numerator*f2.numerator;
	int d=denominator*f2.denominator;
	Fraction fnew(num,d);
	fnew.simplify();
	return fnew;
}
Fraction &operator++(){           //-------------------------IMPORTANT----------------------
	numerator = numerator+denominator;
	return *this;

}
bool operator==(const Fraction & f2)const {
	if(numerator==f2.numerator && denominator==f2.denominator) return true;
	return false;

}
Fraction &  operator+=(Fraction const&f2){ //-------------IMPORTANT
	int lcm=denominator *f2.denominator;
		int x=(numerator*lcm/denominator);
		int y=	(f2.numerator*lcm/f2.denominator);
		numerator=x+y;
	
		denominator=lcm;
		simplify();
	return *this; // ----------------IMPORTANT		

}

int getNumerator()const {
	return numerator;
}
int getDenominator(){
	return denominator;
}
void setNumerator(int n){
	numerator=n;
}
void getDenominator(int d){
	denominator=d;
}
};
