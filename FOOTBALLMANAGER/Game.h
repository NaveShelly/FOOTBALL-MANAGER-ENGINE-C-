#ifndef GAME_H
#define GAME_H
#include "Referee.h"
#include "Team.h"
#include "Date.h"
class Game
{
private:
	friend class League;
	Date* Dates;
	Team* Teams;
	int FirstTeam;
	int SecondTeam;
	int FirstTeamGoals;
	int SecondTeamGoals;
	int GameResult[2];
	string NameOfwinners;
	int NumOfGoals[2];
	Referee* Referees;
public:
	Game();
	~Game();
	Game(const Game &x);
	Game& NewGoal(const Game &x);
	Game& operator=(const Game &x);
	Game& operator <<(const Game &x);
	Game& Game::setGames(const Team b[2]/*, Date *z*/, const int y[2], const string& w, const int u[2], Referee *k);

};
#endif // !GAME_H
