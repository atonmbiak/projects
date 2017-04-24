#ifndef DATA_H
#define DATA_H

//  Beispiel 12.2 Sequenziell gespeicherte Queue
//  Datei data.h

#include <iostream>

using namespace std;

class Data {
  unsigned key;
  //... 
public:
	Data(unsigned k=0) : key(k){ }
	bool operator==(Data &d) { return key == d.key; }
    bool operator<(Data &d) { return key < d.key; }
	friend ostream& operator<<(ostream& s, Data &d); 
};

inline ostream& operator<<(ostream& s, Data &d) 
{ 
	return s << d.key; 
}

#endif // DATA_H