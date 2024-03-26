#include <iostream>
#include <string>
  
#include "dayType.h"  

using namespace std;

// getters for functions
int dayType :: get_nextDay(string weekDays, int printDay, int theDay)
{
for(weekDays = 7; theDay <=7; theDay++)
{
get_Day_to_increment;
}
}

int dayType :: get_prevDay(string weekDays, int printDay, int theDay)
{
for(weekDays = 7; theDay <=7; theDay--)
{
get_prevDay_to_decrement;
}
}

int dayType :: get_addDay(string weekDays, int printDay, int theDay)
{
int i = 1; 
for(weekDays = 7; i <= 7; i++)
{
get_addDay_to_increment;
}
}

int dayType :: get_theDay(string weekDays, int printDay, int theDay)
{
int i = 1;
for(weekDays = 7; i <= 7; theDay++)
{
get_theDay_to_increment;
}
}

// Main 
int main() {
cout << "The following code prints out the dayType object, the nextDay " << nextDay << get_nextDay << '\n' << endl; // dayType.nextDay
cout << "The following code prints out the dayType object, the previousDay: " << prevDay << get_prevDay << '\n' << endl; // dayType.prevDay
cout << "The following code prints out the dayType object, adding a Day:  " << addDay << get_addDay << '\n' << endl;  // dayType.addDay 
cout << "The following code prints the following day of the next listed element in the program: " << get_theDay << print_the_Day << '\n' <<  endl; // dayType.print_the_Day
    return 0;
}