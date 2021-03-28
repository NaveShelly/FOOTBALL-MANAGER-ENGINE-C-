#ifndef FOOTBALLER_H
#define FOOTBALLER_H
#include "Worker.h"
#define BaseSalaryfootballer 6500
class Footballer :public Worker
{
private:
	string TeamName;
	int NumOfScores;
	int NumOfGames;
	string Position;
public:
	Footballer();
	~Footballer();
	Footballer(const Footballer&x);
	Footballer& operator =(const Footballer &x);
	float Avaragerating();
	bool TopPlayer();
	float SeasonSalary();
	Footballer operator<<(const Footballer&x);
	Footballer& setFootballer(const string x, const string w, const int z, const int y, const int t, const int u, const int v);
	Footballer& addFootballer(const Footballer &x);
	Footballer& setTeamName(const string &x);
	int getid(const Footballer *x);
	void addGoal();
};
#endif // !FOOTBALLER_H
