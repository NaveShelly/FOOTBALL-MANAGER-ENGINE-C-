#ifndef LEAGUE_H
#define LEAGUE_H
#include "Team.h"
#include "Game.h"
class League{
private:
	Team** Teams;
	Worker** Workers;
	Game** Games;
	Referee **Referees;
	int NumOfWorkers = 85;
public:
	League&  MakeRTTI();
	League();
	~League();
	League& Menu(const League &x);
};
#endif // !League_H