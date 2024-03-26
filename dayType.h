// HeaderFile
#ifndef H_dayType
#define H_dayType 

#include <iostream>   
#include <string>
#include <iomanip>

using namespace std;

// function prototypes
static const string weekDays[7] = {"Monday", "Tuesday", "Wednesday" , "Thursday", "Friday", "Saturday", "Sunday"};
int setDay(string d);
int addDay(int nDays); 
int printDay(); 
int theDay(); 
int nextDay(); 
int prevDay(); 
int set_Day_to_increment(); 
int set_prevDay_to_decrement();
int set_addDay_to_increment();
int set_theDay_to_increment();
int print_the_Day(int printDay); 
int get_Day_to_increment();
int get_prevDay_to_decrement(); 
int get_addDay_to_increment(); 
int get_theDay_to_increment(); 
int get_nextDay(int theDay);
int get_prevDay(int theDay); 
int get_addDay(int theDay); 
int get_theDay(int theDay); 
int print_the_Day(int theDay);


class dayType
{
public:
    static string weekDays[7];
    void printDay() const;
    string nextDay() const;
    string prevDay() const;
    void addDay(int nDays);

    void setDay(string d);
    void getDay() const;
    dayType(string weekDays); // constructor - class definition 
    dayType(string d); // class definition 

    // getters - prototypes
    static int dayType :: get_nextDay(string weekDays, int printDay, int theDay);
    static int dayType :: get_prevDay(string weekDays, int printDay, int theDay);
    static int dayType :: get_addDay(string weekDays, int printDay, int theDay);
    static int dayType :: get_theDay(string weekDays, int printDay, int theDay);
    // setters - prototypes
    static int dayType :: set_Day(string weekDays, int printDay, string d, int theDay);
    static int dayType :: set_prevDay(string weekDays, int printDay, int theDay);
    static int dayType :: set_addDay(string weekDays, int printDay, int theDay);
    static int dayType :: set_theDay(string weekDays, int printDay, int theDay);
    // printing prototype for the day
    static int dayType ::print_the_Day(string weekDays, int printDay, int nextDay, int prevDay, int addDay);
    
private:
    int dayType :: weekDay;
    void theDay(); // addition to private
};

#endif