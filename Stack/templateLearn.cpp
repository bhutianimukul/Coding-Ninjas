
#include<iostream>
using namespace std;

template <typename T>
class Pair{

		  T x;
		  T y;
		  public:
		  void setX(T  n){
					 x=n;}
		  void setY(T n){ y=n;}
		  T getX() {return x;}
		  T  getY(){ return y;}

};
