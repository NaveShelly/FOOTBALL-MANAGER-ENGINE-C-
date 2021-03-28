#ifndef REFEREE_H
#define REFEREE_H
#include "Worker.h"
#define BaseSalaryReferee 4500
class Referee :public Worker
{
protected:
	int NumOfMistakes;
	int NumOfGames;
	static int MaximumMistakes;
public:
	Referee();
	~Referee();
	Referee(const Referee &x);
	float SeasonSalary();
	bool RefereeOfTheSeason();
	void NewMistakes(const int x);
	Referee& operator=(const Referee &x);
	Referee& operator<<(const Referee& x);
	void NewGames();
	Referee& Referee::setReferee(const string x, const string w, const int z, const int y, const int t, const int u);
	int getid() { return this->id; };
	void addMistakes() { NumOfMistakes++; };
};
#endif // !REFEREE_H
