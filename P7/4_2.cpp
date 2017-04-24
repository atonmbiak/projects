#include "Netz.h"

using namespace std;

int main()
{
	Resistor r1, r2, r3;
	Parallel par(&r1, &r2);
	Serial ser(&par, &r3); // R1|| R2 seriell mit R3
	r1.setRes (100.0); // Werte der 
	r2.setRes (200.0); // Einzelwiderstände
	r3.setRes (300.0); // festlegen

	cout << "Netzwiderstand: " <<ser.Ohm () // Netzwiderstand berechnen <<
		 <<"Ohm" <<endl;
}