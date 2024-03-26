#include <iostream>

using namespace std;

// prototyped functions from headerfile
int isFirstName(int setFirstName); 
int isLastName(int setLastName);
string getfirstName(string );
string getLastName(string );
string getMiddleName(string ); 
string setFirstName(string );
string setMiddleName(string );
string setLastName(string);
int print(int setName);

int main() {

// setters execution
cout << personType.isFirstName << '\n' << endl;  
cin >> personType.setFirstName; 
cout << isFirstName << endl;
cout << personType.isLastName <<'\n'  << endl; 
cin >> personType.setLastName;
cout << isLastName << endl; 

// getters execution 
cout << personType.getfirstName << '\n' << endl; 
cin >> personType.getfirstName; 
cout << getfirstName << endl; 
cout << personType.getlastName << '\n' << endl; 
cin >> personType.getfirstName; 
cout << getLastName << endl; 



    return 0;
}
