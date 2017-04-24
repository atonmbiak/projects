#ifndef KONTAKT_H
#define KONTAKT_H



#include <iostream>

using namespace std;

class Kontakt {
  unsigned Tnummer;
  char * name;
  //... 
public:
	Kontakt(unsigned k,char * n) : Tnummer(k){name=new char[strlen(n)+1];
	strcpy_s(name,strlen(n)+1,n);
	}
	Kontakt(){Tnummer=00000;name=NULL;}
	bool operator==(Kontakt &d) { return Tnummer == d.Tnummer; }
    bool operator<(Kontakt &d) { return Tnummer < d.Tnummer; }
	friend ostream& operator<<(ostream& s, Kontakt &d); 
	friend istream& operator>>(istream& s, Kontakt &d); 
	Kontakt& operator=(const Kontakt& a);
};

inline ostream& operator<<(ostream& s, Kontakt &d) 
{ 
	return s << d.Tnummer<<" "<<d.name<<endl; 
}
inline istream& operator>>(istream& s, Kontakt &d) 
{ 
	s>>d.Tnummer;
	
	char buffer1[100];
	s>>buffer1;
	if(d.name)
		delete [] d.name;
	d.name=new char[strlen(buffer1)+1];
	strcpy_s(d.name,strlen(buffer1)+1,buffer1);

		return s;
}

Kontakt& Kontakt::operator=(const Kontakt& a){

	if(this!=&a){
		this->Tnummer=a.Tnummer;
		delete []this->name;
		this->name= new char [strlen(a.name)+1];
		strcpy_s(this->name,strlen(a.name)+1,a.name);
	}

	return *this;

}

#endif // KONTAKT_H