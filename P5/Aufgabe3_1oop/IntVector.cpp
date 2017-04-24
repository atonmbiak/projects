#include <iostream>
#include "IntVector.h"

using namespace std;

IntVector::IntVector (unsigned i){
	len=i;
	vec = new int [len];
}
unsigned IntVector::size(){
	return len;

}
int& IntVector::at(unsigned i){
	if (i>len){
		exit(-1);
	}
	return vec[i];
}
void IntVector::out(){
	for (int i=0; i<len; i++)
	cout << vec << '\n';
}