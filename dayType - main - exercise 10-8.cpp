//Main program
#include "counterType.h"
#include <iostream>


using namespace std;

int counterType :: getCounter(int counter, int counter1) // getter for counter #1 in for loop.
{ 
int i; // placeholder
for(int counter1; counter1 <= 1; i++)
{
cout << "The incremental value of this element is: " << counter1 << endl;
cout << "Counter = " << counter1 << endl; 
}
return counter; // mm
} 

int counterType :: getCounter2(int counter, int counter2) // getter for counter #2 in for loop.
{
int i; 
for(int counter2; counter2 <= 2; i--)
{
   // not applicable must overload 
   // cout << "The decremental value of this element is: " << counter2 << endl;
   // cout << "Counter = " << counter2 << endl; 
return counter2;
 } 
// return counter; // I want to return the counter type which is int and the value it displays.
}

int main()
{
    // Member Functions to place from class into implementation file to main 
     // place in classname.member_name here. - Dependant on execution will determine how the program will execute.
    /* 
    counterType counter; // instance 
    counterType counter{0}; 
    cout << counter << '\n' << endl; 
    */
    
    // for loop int counterType :: getCounter(int counter, int counter1) // getter for counter #1 in for loop.
{ 
int i;
 // need to resolve i++ increment problem 
    cout << "The following code returns getCounter after a series of iterations: " << getCounter << " " << getCounter2 << '\n' << endl;
    cout << "The following code has the value of the incremented counter after a series of iterations: " << counter1 << getCounter  << '\n' << endl; 
    cout << "The following code has the value of the decremented counter after a series of iterations: " << counter2 << getCounter2 << '\n' << endl;
    cout << "This following code has the value of the counter: " << getCounter << counter << '\n' << endl; 

//    counterType getCounter{counter, counter1}; 
  
    return 0;
 }
}
