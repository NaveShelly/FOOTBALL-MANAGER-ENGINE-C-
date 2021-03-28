#include "Worker.h"
Worker::Worker()
{
	CarrerTime = 0;
}
Worker::~Worker()//?
{
	cout << "Worker Deleted" << endl;
}
Worker::Worker(const Worker & x)
{
	this->operator=(x);
}
Worker Worker::operator<<(const Worker &x)
{
	cout << "The Details of the Worker is :" << endl;
	cout << "First Name:" << endl;
	cout << FName << endl;
	cout << "Last Name:" << endl;
	cout << "Carrier Time:" << endl;
	cout << CarrerTime << endl;
	return (*this);
}
Worker& Worker::operator=(const Worker &x)
{
	FName = x.FName;
	LName = x.LName;
	id = x.id;
	CarrerTime = x.CarrerTime;
	return (*this);
}
//int Worker::Salary()?
//{
//	
//}