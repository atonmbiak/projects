//   Beispiel 10.3 Sortieren von sequentiellen Listen
//   Datei bsp_10_3.cpp

#include <iostream>
#include "sequence.h"
#include "data.h"
#include "Header.h"

using namespace std;

typedef Sequence<Student> DataSeq;

void listAll(DataSeq& dataSeq);



int main()
{
	int n;
	cout<<"wie viel Studenten wollen Sie eintragen "<<endl;
	cin>>n;
  DataSeq dataSeq(n);
   Student data;
  
  try 
  { 
    for (int i=0; i<n; i++) {
	  cin>>data; 
	  dataSeq.pushBack(data);
	};
  }
  catch (SequenceOverflow)
  {
	cout << "Overflow\n";
  }
  
  listAll(dataSeq);

  dataSeq.quickSort(0, dataSeq.size()-1);

  cout << "Sorted ";
  listAll(dataSeq);
}

void listAll(DataSeq& dataSeq)
{
  cout << "data: ";
  for (unsigned i=0; i<dataSeq.size(); i++)
     cout << dataSeq[i] << " ";
  
  cout << endl;
}