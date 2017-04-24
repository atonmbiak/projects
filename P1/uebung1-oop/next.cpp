#include "IntVector.h"

IntVector::IntVector()
{
	cout<<"Konstruktor angelegt";
}
IntVector::IntVector(unsigned n)
{
	vec = new int [n];
	len+n;
}
IntVector::~IntVector()
{
	cout<<"Konstante wurde zertifiert";
	delete [] vec;
}
int & IntVector::at(unsigned i)
{
	if (i<len)
		return vec[i];
	else
		cout<<"OVERFLOW"<<endl;
}
void IntVector::out()
{
	for (int i=0; i<len; i++)
		cout<<"zeiger zeilenweise"<<vec[i]<<endl;
}
int IntVector::size(){
	return len;
}
Iterator::Iterator(IntVector *v)
{
	intVec=v;
	index=1;
}


