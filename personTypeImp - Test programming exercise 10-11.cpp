#include "personType.h"

#include <iostream> 
#include <string> 

using namespace std; 

// getters 
    string getFirstName(string getFirstName)
    { 
    getFirstName = " ";
    }
	string getMiddleName(string getMiddleName)
    {
    getMiddleName = " "; 
    }
	string getLastName(string getLastName)
    {
    getLastName = "  ";
    }

// setters
    string setFirstName(string getMiddleName)
    { 
    getMiddleName = " "; 
    }
	string setMiddleName(string setMiddleName)
    {
    setMiddleName = " "; 
    }
	string setLastName(string setLastName)
    { 
    setLastName =  " ";
    }

    // print function - via member by membeer
    void print(string last, string first, string middle, string print)
    { 
    print = first, last, middle; 
    }

    void setName(string last, string first, string middle, string name )
    { 
    name = " "; 
    first= " "; 
    last = " "; 
    middle = " "; 
    }

    bool isFirstName(string first, string last, string getFirstName, string getLastName)
    {
    if(first == getFirstName)
    {
    getFirstName = "  ";  
    }
    if(last == getLastName)
    {
    getLastName =  "  ";
    last =  " "; 
    }
    }

// Write your code here

