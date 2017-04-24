 #include <iostream>
#include "intvector.h"
using namespace std;

int main()
{ 
  const unsigned LEN = 5;
  IntVector vector(LEN);

  for(unsigned i=0; i<vector.size(); i++)
    vector.at(i) = i;

  vector.out();
  
  vector.at(1) = 1001;
  cout << vector.at(1) << '\n';
  cout << vector.at(5) << '\n';
  return 0;
}

