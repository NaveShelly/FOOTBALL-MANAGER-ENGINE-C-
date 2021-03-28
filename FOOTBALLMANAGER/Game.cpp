#include "Game.h"

Game::Game()
{
	Teams = new Team[2];
	GameResult[0]= 0;
	GameResult[1] = 0;
	NameOfwinners= "0";
	NumOfGoals[0] = 0;
	NumOfGoals[1] = 0;
}

Game::~Game()
{
	delete this;
}

Game::Game(const Game & x)
{
	this->operator=(x);
}

Game & Game::operator=(const Game & x)
{
	this->Dates=x.Dates;
	for (int i = 0;i < 5;i++)
	{
		Teams[i] = x.Teams[i];
	}
	this->GameResult[0]=x.GameResult[0];
	this->GameResult[1] = x.GameResult[1];
	this->NameOfwinners=x.NameOfwinners;
	this->NumOfGoals[2];
	for (int i = 0;i < 5;i++)
	{
		Referees[i] = x.Referees[i];
	}
	return (*this);
}

Game & Game::operator<<(const Game & x)
{
	cout << "The Date is:" << endl;
	cout << "The Game is Between " << FirstTeam<<"Vs" <<SecondTeam<<endl;
	cout << "The Result of The the Game is :" << FirstTeamGoals << "-" <<SecondTeamGoals<<endl;
	cout << "The Wining Team is :" << endl;
	cout << this->NameOfwinners<<endl;
	cout << "The Deatails of The Referee in The Game is:";
	Referees->operator<<((*Referees));
	return (*this);
}
Game& Game::setGames(const Team b[2]/*, Date *z,*/, const int y[2], const string& w, const int u[2], Referee *k)
{
	Team *tmp = new Team[2];
	tmp[0].operator=(b[0]);
	tmp[1].operator=(b[1]);
	//Dates = z;
	FirstTeam= y[0];
	SecondTeam = y[1];
	FirstTeamGoals = u[0];
	SecondTeamGoals= u[1];
	NameOfwinners = w;
	Referees = k;
	tmp->operator=(Teams);
	return (*this);
}
