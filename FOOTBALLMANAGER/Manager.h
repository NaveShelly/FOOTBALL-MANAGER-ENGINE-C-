#ifndef MANAGER_H
#define MANAGER_H
#include "Worker.h"
#define BaseSalaryManager 4500
class Manager :public Worker
{
private:
public:
	Manager();
	~Manager();
	Manager(const Manager& x);
	Manager& operator=(const Manager& x);
	Manager& operator <<(const Manager& x);
	float ManagerSalary();
	bool ManagerOftheSeason();
	Manager& setManager(const string, const string, const int, const int);
};
#define BaseSalaryReferee 4500
#endif