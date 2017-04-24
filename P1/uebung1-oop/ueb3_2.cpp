//Uebungsaufgabe 3.2 - Klassen, friends

#include <iostream>
#include "IntVector.h"

using namespace std;

void out(IntVector *intVec);

int main()
{ 
  const unsigned LEN =5;
  IntVector vector(LEN);
  
  for(unsigned i=0; i<vector.size(); i++)
    vector.at(i) = i;

  out(&vector);

  return 0;
}

void out(IntVector *intVec)
{
  Iterator it(intVec);
  int *el;

  while ((el = it.next()) != NULL)
    cout << *el << '\n';
}

