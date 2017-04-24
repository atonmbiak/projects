#include"Header.h"
using namespace std;

istream& operator>>(istream& s, Student& a){

	char buffer1[100];
	char buffer2[100];
	
	
	long x;
		  s>>x;
	 s>>buffer1;
	 if(a.name!=NULL)
		 delete [] a.name;
		 
	 a.name=new char [strlen(buffer1)+1];
	 
	 
	 if(a.vorName!=NULL)
		 delete [] a.vorName;
	s>>buffer2;	 
	 a.vorName=new char [strlen(buffer2)+1];
	 
	
	 Student z(buffer1,buffer2,x);
			
	 a=z;
			
		 
	 return s;
}
ostream& operator<<(ostream& s,Student& const a){

	
	return s<<a.name<<" "<<a.vorName<<" "<<a.matrNr<<endl;
	

}