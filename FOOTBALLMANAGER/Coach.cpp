#include "Coach.h"
#include <string>
Coach::Coach()
{
	TeamName = '0';
	NumOfTitles = 0;
}
Coach ::~Coach()
{
	TeamName = '0';
	NumOfTitles = 0;
	PastFootballer = NULL;
}
Coach::Coach(const Coach&x)
{
	this->operator=(x);
}
Coach& Coach::operator=(const Coach &x)
{
	this->TeamName = x.TeamName;
	this->NumOfTitles = x.NumOfTitles;
	this->PastFootballer = x.PastFootballer;
	return (*this);
}
float Coach::SeasonSalary()
{
	return BaseSalaryCoach + 200 * (CarrerTime) + 500 * NumOfTitles;
}
bool Coach::TopCoach()
{
	if (NumOfTitles >= 2)
		return true;
	else
		return false;
}
Coach& Coach::operator<<(const Coach &x)
{
	cout << "The First Name of The Coach is" << endl;
	cout << FName;
	cout << "The Last Name of The Coach is" << endl;
	cout << LName;
	cout << "The id of the Coach is" << endl;
	cout << id;
	cout << "The Name of the team is :" << endl;
	cout << TeamName;
	cout<<endl;
	cout << "Did The Coach Past Footballer?" << endl;
	cout << PastFootballer<<endl;
	cout << "Titles Number: " << NumOfTitles << endl;
	cout << "The Salary of the coach is :" << endl;
	cout << SeasonSalary()<<endl;
	return *this;
}
Coach& Coach::setCoach(const string x, const string w, const int z, const int y, const int t, const int u, const int v)
{
	this->FName = x;
	this->LName = w;
	this->CarrerTime = z;
	this->id = y;
	this->NumOfTitles = t;
	this->PastFootballer = u;
	this->TeamName = v;
	return (*this);
}