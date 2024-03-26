//Implementation File
#include "counterType.h" 
#include <iostream> 

// - All of these belong in the implementation file, not in the headerfile.

// 1.Implement Constructors and Destructors 
 

// void counterType(); // constructor
// void ~counterType(); // destructor

void counterType :: counter(int counter, int counter1, int counter2) { 
counter; 
counter1;
counter2; 
void counterType(); 
} // purpose of this function is to be a basis for the for loops and instances


// 2. Getters
// Getters(Accessors) Prototypes 
// function-creation for counterType's getCounter - returning the value of a counter.
int counterType :: getCounter(int counter, int counter1) // getter for counter #1 in for loop.
{ 
int i; // need to resolve i++ increment problem 
for(int counter1; counter1 <= 1; i++)
{
    // not applicable must overload 
    
/*
cout << "The incremental value of this element is: " << counter1 << endl;
cout << "Counter = " << counter1 << endl; 
*/ 
return counter;
 }
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
 
// 3. Setters
// Setters(Manipulator) Prototypes
void counterType :: set_counter(int counter, int counter2)  // setter for counter #1 in for loop.
{
set_counter_to_increment(counter1);
}

void counterType :: set_counter2(int counter, int counter2) // setter for counter #2 in for loop. 
{ 
set_counter_to_decrement(counter2);
}

int counterType:: print_counter_value(int counter, int counter1, int counter2) {
counter =  0; 
counter1 = 1;
counter2 = 2;
}
 // Syntax: 1. return type, 2. class name, 3. reference towards variable definition within parameters w/ data type

