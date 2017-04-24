#include <iostream>
#include "intvector.h"

using namespace std;

// Elementfunktionen der Klasse IntVector

IntVector::IntVector(unsigned len)
{
  length = len;
  elements = new int[length]; 
}


IntVector::~IntVector()
{
  delete [] elements;
}

unsigned IntVector::size() const
{
	return length;
}

int &IntVector::at(unsigned i)
{
  if ( i >= length) 
  {	cout << "index Overflow\n";
    exit(1);  
  }
  else
    return elements[i];
}
  
void IntVector::out(void) const
{
  for (unsigned i=0; i<length; i++)
	cout << elements[i] << '\n';
}
