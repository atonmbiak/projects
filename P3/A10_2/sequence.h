#ifndef SEQUENCE_H
#define SEQUENCE_H

// Beispiel 10.3 Sortieren von sequentiellen Listen
// Datei sequence.h

#pragma warning( disable : 4290)  // throw Anweisung

// Exception-Klasse
class InvalidIndex { };
class SequenceOverflow { };

template<class T>
void swapIt(T &a, T &b)
{
	T temp;
	temp = a;   
	a = b;
	b = temp;
}

template<class AD> // AD Typ für Sequence-Element
class Sequence  {
  AD *seq;        // Speicherplatz
  unsigned max;   // maximale Länge 
  unsigned len;   // aktuelle Länge
public:
  Sequence(unsigned n);
  ~Sequence(void);
  unsigned size(void) const;
  bool isEmpty(void) const;
  bool isFull(void) const;
  AD& operator[](unsigned pos) throw (InvalidIndex);
  void pushBack(AD &el)throw(SequenceOverflow); 
  void insert(AD& el) throw(SequenceOverflow);
  bool remove(AD& el);
  AD *seqSearch(AD& el) const;
  AD *binSearch(AD& el) const;
  void quickSort(int left, int right);
 };



template<class AD> 
inline Sequence<AD>::Sequence(unsigned n)
{
	max = n;
	seq = new AD[max];
	len = 0;
}

template<class AD> 
inline Sequence<AD>::~Sequence(void)
{
	delete [] seq;
}

template<class AD> 
inline unsigned Sequence<AD>::size(void) const
{
	return len;
}

template<class AD> 
inline bool Sequence<AD>::isEmpty(void) const
{
	return len==0;
}

template<class AD> 
inline bool Sequence<AD>::isFull(void) const
{
	return len==max;
}


template<class AD> 
AD& Sequence<AD>::operator[](unsigned pos) throw (InvalidIndex)
{
	if (pos >= len) 
		throw InvalidIndex();
	else 
		return seq[pos];
}

template<class AD> 
inline void Sequence<AD>::pushBack(AD &el)throw(SequenceOverflow)
{ 
	if (isFull())
	  throw SequenceOverflow();
	seq[len] = el;
	len++;
}

template<class AD> 
inline void Sequence<AD>::insert(AD& el) throw (SequenceOverflow)
{
	unsigned pos, i;

	if (isFull())
	  throw SequenceOverflow(); 
	for (pos=0; pos<len; pos++)  // Einfügeposition suchen
	  if (el < seq[pos])
		  break;
    for (i=len; i>pos; i--)      // Verschieben
	    seq[i] = seq[i-1];
	seq[pos] = el;               // Einfügen
	len++;
}


template<class AD> 
inline bool Sequence<AD>::remove(AD &el) 
{ unsigned i, j;

  for (i=0; i<len; i++)  // Löschposition suchen
  {  if (seq[i] == el)
     {  for (j=i; j<len-1; j++)    // komprimieren
	      seq[j] = seq[j+1];
	    len--;  
		return true;
     }
  }
  return false;
}

template<class AD> 
inline AD *Sequence<AD>::seqSearch(AD& el) const
{ unsigned i;

  for (i=0; i<len; i++)  
  {  if (seq[i] == el)
		 return &seq[i];
  }
  return NULL;
}

template<class AD> 
inline AD *Sequence<AD>::binSearch(AD& el) const
{ 
  int l=0, r=len-1, m;
    
  while (l <= r)
  {
	m = (l+r)/2;
	if (seq[m] < el)
	  l = m+1;
	else if (el < seq[m])
	  r = m-1;
	else
	  return &seq[m];
  }
  return NULL;
}


template<class AD> 
inline void Sequence<AD>::quickSort(int left, int right)
{
  if (left < right)
  {
	int li=left-1, re=right, pivot=right;
	for(;;)
	{
	  while(seq[++li] < seq[pivot]);
	  while(li < re && seq[pivot] < seq[--re]);
	  if(li >= re) 
	    break;
	  swapIt(seq[li], seq[re]);    // Vertauschung
	 }
	 swapIt(seq[li], seq[pivot]);  // Positionieren des Pivoelements

	 if  (left < li-1)
	   quickSort(left, li-1);  // Sortieren linke Teilliste
	 if( re+1 < right)
	   quickSort(re+1, right); // Sortieren rechte Teilliste
  }
}

#endif // SEQUENCE_H