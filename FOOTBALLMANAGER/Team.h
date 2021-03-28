#ifndef TEAM_H
#define TEAM_H
#include "Stadium.h"
#include "Footballer.h"
#include "Coach.h"
#include "Manager.h"
#include "Referee.h"
class Team
{
private:
	friend class League;
	string TeamName;
	Stadium* Stadiumx;
	Footballer** Player;
	Coach* Coachs;
	Manager* Managers;
	bool Director;
public:
	Team();
	~Team();
	Team(const Team&x);
	Team& operator=(const Team *x);
	Team& AddFootballer(const Team& x);
	Team& AddDirector(const Team& x);
	//Team& AddCoach(const Team& x); Need Finish
	Team& operator<<(const Team&x);
	//HERE NEED TO BE THE LAST FUNCTION IN THE 
	void FindFootballer(int,int);
	Team& SetTeam();
};
#endif // !TEAM_H
