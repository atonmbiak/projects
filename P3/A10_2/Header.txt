#ifndef HEAD
#define HEAD 
#include <iostream>
#include<string>




class Student{

private:
	char *name,*vorName;
	long matrNr;
public:
	Student(const Student & s);
	Student();
	Student(char *n,char *v, long l);
	~Student();
	friend std::ostream& operator<<(std::ostream &s, Student& const a);	
	friend std::istream& operator>>(std::istream &s,Student& a);
	bool operator<=(Student& s){return matrNr<=s.matrNr;};
	bool operator>=(Student& s){return matrNr>=s.matrNr;};
	bool operator<(Student& s){return matrNr<s.matrNr;};
	bool operator>(Student& s){return matrNr>s.matrNr;};
	bool operator==(Student& s){return matrNr==s.matrNr;};
	Student& operator=(const Student& s);
	void setName(char * s);
	void setVorname(char * s);
	void serMatr(long l);
		
};
inline Student::Student(const Student & s){
		delete []name;
		delete []vorName;
		this->name=new char[strlen((s.name)+1)];
		strcpy_s(this->name,strlen((s.name))+1,s.name);
		this->vorName=new char[strlen((s.vorName)+1)];
		strcpy_s(this->vorName,strlen((s.vorName))+1,s.vorName);
		this->matrNr=s.matrNr;
	};
inline void Student::setName(char * s){

if(name!=NULL)
		delete[] name;
		
	name=new char [strlen(s)+1];
	strcpy_s(name,strlen(s)+1,s);
		
}

inline void Student::setVorname(char * s){

	if(vorName!=NULL)
		delete[] vorName;
		
	vorName=new char [strlen(s)+1];
	strcpy_s(vorName,strlen(s)+1,s);
		

}
inline void Student::serMatr(long l){matrNr=l;}

inline Student::Student(){
	name=NULL;
	vorName=NULL;
	matrNr=0;

}
inline Student::Student(char *n,char *v, long l):matrNr(l){
	
	
	name=new char [strlen(n)+1];
	strcpy_s(name,strlen(n)+1,n);
	vorName=new char [strlen(v)+1];
	strcpy_s(vorName,strlen(v)+1,v);


}


inline Student::~Student(){
	delete []name;
	delete []vorName;
}

inline Student& Student::operator=(const Student& s){

	if(this!= &s){
		delete []name;
		delete []vorName;
		this->name=new char[strlen(s.name)+1];
		strcpy_s(this->name,strlen(s.name)+1,s.name);
		this->vorName=new char[strlen(s.vorName)+1];
		strcpy_s(this->vorName,strlen(s.vorName)+1,s.vorName);
		this->matrNr=s.matrNr;
	};
	return *this;
}

#endif







