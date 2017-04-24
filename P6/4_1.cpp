/* Aufgabe 4_1.cpp von OOP.Skript
Do. 23.10.2015 */

#include <iostream>
#include <math.h>


class Gatter{
	protected:
		int anzEin; // Anzahl der Eingänge
		Konnektor *ein;
		Konnektor *aus;
		virtual void schalten (void) = 0;
public:
	Gatter (int anz);
	~Gatter (void);
	int setEingangsSignal (int nr, Signal sig);
	Signal getAusgangsSignal (void);
};
class UndGatter: public Gatter{
protected:
	void schalten (void);
public:
	UndGatter (int anz = 2);
};
class OderGatter: public Gatter{
protected:
	void schalten (void);
public:
	OderGatter (int anz = 2);
};
class NotGatter: public Gatter{
protected:
	void schalten (void);
public:
	NotGatter (int anz = 2);
};
class NANDGatter: public Gatter{
protected:
	void schalten (void);
public:
	(int anz = 2);
};
	
	