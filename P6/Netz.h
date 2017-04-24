#include <iostream>
#include <math.h>

using namespace std;

class Netz {
public:
	virtual double Ohm() = 0;
};

class Resistor : public Netz{
	double valeur; // Wert
public:
	double Ohm (); // Die Funktion liefert Ohm vom Typ double
	void setRes (double v);

};
class Parallel: public Netz{
	Netz *n1, *n2;
public:
	Parallel (Netz *n1, Netz *n2);
	double Ohm();
};

class Serial: public Netz{
	Netz *n1, *n2;
public:
	Serial (Netz *n1, Netz *n2);
	double Ohm ();
};
inline Parallel:: Parallel (Netz *n1, Netz *n2){      // Funktion implementieren
this->n1 = n1; // der Wert von n1 wird n1 zugewiesen
}
inline Serial:: Serial (Netz *n1, Netz *n2){
this->n1 = n1;

}

inline void Resistor::setRes (double v){
	valeur = v;
}

inline double Resistor::Ohm(){
	return valeur;
}

inline double Serial::Ohm(){
	return n1->Ohm() + n2->Ohm();
}
inline double Parallel::Ohm(){
	return (n1->Ohm() + n2->Ohm())/(n1->Ohm() + n2->Ohm());
}


