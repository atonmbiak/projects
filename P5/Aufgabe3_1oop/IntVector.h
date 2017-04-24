#ifndef INTVECT
#define INTVECT
#include <iostream>

using namespace std;

class IntVector {
	int *vec;
	unsigned len;
public:
	IntVector (unsigned i);
	IntVector ();
	unsigned size();
	int& at(unsigned i);
	void out();
};

#endif