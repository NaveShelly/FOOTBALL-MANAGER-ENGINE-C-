#include "person.h"
#include <string>
Person::Person()
{

	FName ='0';
	LName = '0';
	id = 0;
}
Person::~Person()
{
	FName = '0';
	LName = '0';
	id = '0';
}
Person::Person(const Person &x)
{
	FName = x.FName;
	LName = x.LName;
	id = x.id;
}