#include "Manager.h"
Manager::Manager()
{
	//
}
Manager::~Manager()
{
	delete this;
}
Manager::Manager(const Manager& x)
{
	this->operator=(x);
}
Manager& Manager::operator=(const Manager& x)
{
	this->FName = x.FName;
	this->LName = x.LName;
	this->id = x.id;
	this->CarrerTime = x.CarrerTime;
	return (*this);
}
Manager & Manager::operator<<(const Manager & x)
{
	
	cout << "The Salary of The Manager is :" << endl;
	cout<< ManagerSalary() <<endl;
	return (*this);
}
float Manager::ManagerSalary()
{
	return BaseSalaryManager*3 + 500*GetCarrierTime();
}
bool Manager::ManagerOftheSeason()
{
	if (GetCarrierTime() >= 4)
		return 1;
	else return 0;
}

Manager & Manager::setManager(const string x, const string y, const int z, const int w)
{
	FName = x;
	LName = y;
	id = z;
	CarrerTime = w;
	return (*this);
}
