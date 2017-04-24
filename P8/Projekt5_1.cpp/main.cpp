#include "Point.h"

void main (){
	Point a(3,5); Point b(4,8);
	Line po(a,b);
	po+=a;
	//Line start(); Line ende(); Line l1;
	Line l1(a,b);
	l1 +=b;
	a +=b;
	if (a==b)
		cout<< "identisch";
	else 
	cout << "verschieden";
	
	getchar();
	getchar();
	getchar();
}