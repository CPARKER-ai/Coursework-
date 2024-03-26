#ifndef PERSON_TYPE_H
#define PERSON_TYPE_H

#include <iostream>
#include <string> 
using namespace std;

// prototypes 
int  isFirstName(int setFirstName); 
int isLastName(int setLastName);
string getfirstName(string );
string getLastName(string );
string getMiddleName(string ); 
string setFirstName(string );
string setMiddleName(string );
string setLastName(string);
int print(int setName);


class personType
{
public:
    void print() const;
    void setName(string first, string middle, string last);
	void setLastName(string last);
	void setFirstName(string first);
	void setMiddleName(string middle);
    void name();

	bool isLastName(string last) const;
	bool isFirstName(string first) const;
    //getters 
    string getFirstName() const;
	string getMiddleName() const;
	string getLastName() const;
    //setters
    string setFirstName() const;
	string setMiddleName() const;
	string setLastName() const;
 // inititialization of personType object with constructor 
    personType(string first = "", string middle = "", string last = "");
    personType(); // constructor

private:
    string firstName; 
    string middleName; 
    string lastName;  
};

#endif
