// Implementation File
#include "dayType.h" 
#include <iostream> 

// 1. Implement Constructors(or Destructors)

int dayType :: weekDays[7]
{
weekDays[7] = {"Monday", "Tuesday", "Wednesday" , "Thursday", "Friday", "Saturday", "Sunday"};
dayType(string weekDays); // constructor 
}

// 2. Getters - Getters(Accessors) Prototypes 
int dayType :: weekDays(string weekDays, int printDay, int theDay )

static string weekDays[7] = {"Monday", "Tuesday", "Wednesday" , "Thursday", "Friday", "Saturday", "Sunday"};
int setDay(string d);
int addDay(int nDays); 
int printDay(); 
int theDay(); 
int nextDay(); 
int prevDay(); 


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
for(weekDays = 7; weekDays <= 7; theDay++)
{
get_theDay_to_increment;
}
}

// 3. Setters 
// Setters(Mutators) Prototypes
int dayType :: set_Day(string weekDays, int printDay, string d, int theDay)
{ 
for(weekDays = 7; theDay <=7; theDay++)
{
set_Day_to_increment;
}
}

int dayType :: set_prevDay(string weekDays, int printDay, int theDay)
{
for(weekDays = 7; theDay <=7; theDay--)
{
set_prevDay_to_decrement;
}
}

int dayType :: set_addDay(string weekDays, int printDay, int theDay)
{
for(weekDays = 7; i <= 7; i++)
{
set_addDay_to_increment;
}
}

int dayType :: set_theDay(string weekDays, int printDay, int theDay)
{
for(weekDays = 7; weekDays <= 7; theDay++)
{
set_theDay_to_increment;
}
}

// Printing function 
int dayType :: print_the_Day(string weekDays, int printDay, int nextDay, int prevDay, int addDay)
{
for(weekDays = 7; weekDays <= 7; theDay++)
{
cout << "Starting on Sunday" << endl; 
}
}
