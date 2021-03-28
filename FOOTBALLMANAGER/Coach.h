#ifndef COACH_H
#define COACH_H
#include "Worker.h"
#define BaseSalaryCoach 4500
class Coach :public Worker
{
protected:
	string TeamName;
	bool PastFootballer;
	int NumOfTitles;
public:
	Coach();
	~Coach();
	Coach(const Coach &x);
	float SeasonSalary();
	bool TopCoach();
	Coach& operator<<(const Coach &x);
	Coach& Coach::operator=(const Coach &x);
	Coach& Coach::setCoach(const string x, const string w, const int z, const int y, const int t, const int u, const int v);
};
#endif // !COACH_H
