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
	friend class IntVector;//friend-Klass damit ich auf die erste IntVector klasse zugreifen könnte
};

class Iterator {
	IntVector *intVec;
	unsigned index;
public:
	Iterator (IntVector *vec);
	int *next;
};

#endif