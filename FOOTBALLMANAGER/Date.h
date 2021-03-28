#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	int month, day, year;
public:
	//These are consturctors
	Date();
	Date(int, int, int);
	//Destructor 
	~Date() {}
	//void do not return values
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void showDate1();
	void showDate2();
};
#endif // !DATE_H