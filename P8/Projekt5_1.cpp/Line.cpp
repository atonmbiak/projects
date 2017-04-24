#include "Point.h"

using namespace std;


Point& Point::operator+=(Point p1){
	x+=p1.x;// x=x+p1.x;
	y+=p1.y;
return *this;
}
	bool Point::operator==(Point p1){                  //der gibt einen bool wert zurück 
		if((x==p1.x)&&(y==p1.y)){
			return true;
		}

		return false;
	}



Line& Line::operator+=(Point l1){
	start+=l1;
	ende+=l1;
return *this;  
}
	
bool Line::operator==(Line l1){
	if ((start==l1.start)&&(ende==l1.ende)){
		return true;
	}
	return false;

}