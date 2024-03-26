#ifndef CLASS_COUNTERTYPE 
#define CLASS_COUNTERTYPE 

#include <iostream> 
#include <string> 
#include <iomanip> 

// function prototype(s)
void counterType(int counter); 
void print_counter_value(int counter);
int counter(); 
int counter1();
int counter2();
int getCounter(int counter); 
int getCounter2(int counter2); 
int set_counter(int counter); 
int set_counter2(int counter2);
int set_counter_to_increment(int counter1); 
int set_counter_to_decrement(int counter2); 


// The purpose ofr using counter in these paramters is for each function to start at 
// a default base of 0, so with each iteration there is a +1 added to each if-statement 
// and a reference point for their numerical values. + so int main knows what counter is.

// const int COUNTER_TYPE = 0;  

class counterType
{
private:
const int counter; 
// int counterType :: counter[COUNTER_TYPE]; // there will be a return type of type int.
    
public: 
int counter = 0; // base - neccessary for all loops
void counterType :: counter(int counter, int counter1, int counter2); 
int counter1 = 1; // base for first loop - increment
int counter2 = 2; // base for second loop - decrement
counterType(int counter); // constructor - only places instances in the brackets that will be used in integer main.
~counterType(); // destructor 

// getter prototype - accessor 
int counterType :: getCounter(int counter, int counter1); // getter // purpose is to get counter's 1 if-statement. 
int counterType :: getCounter2(int counter, int counter2); // purpose is to get counter 2's if-statement.

// setter prototype - manipulator 
void counterType :: set_counter(int counter, int counter1); // setter
void counterType :: set_counter2(int counter, int counter2);

// printing operator within the class. 
int counterType :: print_counter_value(int counter, int counter1, int counter2);
/*Example void Bank:: get_pathFile(); */
/* Friend operator
// friend ostream& operator << (std:: ostream& ostream& os, const counterType& counter); 
*/

};

// ostream& operator << (std:: ostream& ostream& os, const counterType& counter); 

#endif 