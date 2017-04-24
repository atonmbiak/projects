#ifndef QUEUE_H
#define QUEUE_H

//   Beispiel 12.2 Sequenziell gespeicherte Queue
//   Datei queue.h

#pragma warning( disable : 4290)  // throw Anweisung

// Exception-Klasse
class QueueUnderflow { };

	
template<class AD> // AD Typ für Nutzdaten (Application Data)
class Queue  {

	struct queue{
	  AD el;
	  queue * next;	    
  }*first,*tail;  

  unsigned len;   // aktuelle Länge

public:
  Queue();
  ~Queue(void);
  unsigned size(void) const;
  bool isEmpty(void) const;
  
  void put(AD &el) ;
  
  AD get(void) throw(QueueUnderflow);
};


template<class AD> 
inline Queue<AD>::Queue()
{
	first =NULL;
	tail=NULL;
	len=0;
		
	
}


template<class AD> 
inline Queue<AD>::~Queue(void)
{
	queue *curr;
	
	while(first){

		
		curr=first;
		first=first->next;
		delete curr;
	};
	

}

template<class AD> 
inline unsigned Queue<AD>::size(void) const
{
	return len;
}

template<class AD> 
inline bool Queue<AD>::isEmpty(void) const
{
	return first==NULL;
}

 


template<class AD> 
inline void Queue<AD>::put(AD &el)
{ 
  if (isEmpty())
  {
	  first =new queue;
	  first->el=el;
	  first->next=NULL;
	  tail=first;
	  len++;
  }
  else
  {
	  queue* curr=new queue;
	  curr->el=el;
	  curr->next=NULL;
	  tail->next=curr;
	  tail=curr;
	  len++;
}
}

template<class AD> 
inline AD Queue<AD>::get(void) throw(QueueUnderflow)
{
 

  if (isEmpty())
	throw QueueUnderflow(); 
   
  if(first==tail){
	  AD x;
	  x=first->el;
	   delete first;
	   first=tail=NULL;
		  len--;
	  return x;
  }
  else
  {
	  AD x;
	  x=first->el;
	  queue * curr=first;
	  first=first->next;
	delete curr;
	len--;
	return x;

  }
}

#endif // QUEUE_H