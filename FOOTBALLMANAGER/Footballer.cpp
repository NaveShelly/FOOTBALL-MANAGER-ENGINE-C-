#include "Footballer.h"
Footballer::Footballer()
{
	NumOfGames = 0;
	NumOfScores = 0;
	TeamName = '0';
	Position = '0';
}
Footballer ::~Footballer()
{
	TeamName = "0";
	NumOfScores = 0;
	NumOfGames = 0;
	Position = "0";
}
Footballer::Footballer(const Footballer&x)
{
	this->operator=(x);
}
Footballer& Footballer::operator = (const Footballer &x)
{
	this->FName = x.FName;
	this->LName = x.LName;
	this->id = x.id;
	this->TeamName=x.TeamName;
	this->NumOfScores=x.NumOfScores;
	this-> NumOfGames=x.NumOfGames;
	this->Position=x.Position;
	return (*this);
}
float Footballer:: Avaragerating()
{
	return (float)(NumOfScores / NumOfGames);
}
bool Footballer::TopPlayer()
{
	float x;
	x = this->Avaragerating();
	if (x > 0.75)
		return true;
	else
		return false;
}
float Footballer::SeasonSalary()
{
	return BaseSalaryfootballer + (Avaragerating() / 100) * 2000;
}
Footballer Footballer::operator<<(const Footballer&x)
{
	cout << "The Footballer details are:" << endl;
	cout << "First Name:" << endl;
	cout << FName<<endl;
	cout << "Last Name:" << endl;
	cout << LName << endl;
	cout << "id:" << endl;
	cout << id<<endl;
	cout << "CarrierTime:";
	cout << CarrerTime<<endl;
	cout << "Team Name:" << endl;
	cout << TeamName<<endl;
	cout << "Number of Goals : " <<NumOfScores<< endl;
	cout << "Number of Games : " << NumOfGames << endl;
	cout << "Position :" << endl;
	cout << Position << endl;
	cout << "Salary:" << endl;
	cout << SeasonSalary()<<endl;
	return (*this);
}
Footballer& Footballer::setFootballer(const string x,const string w,const int z,const int y,const int t,const int u,const int v)
{
	this->FName = x;
	this->LName = w;
	this->CarrerTime = z;
	this->id = y;
	this->NumOfScores = t;
	this->NumOfGames = u;
	this->TeamName = v;
	return (*this);
}

Footballer & Footballer::addFootballer(const Footballer & x)
{
	cout << "Enter The FName Of the New Footballer " << endl;
	cin >> FName;
	cout << "Enter The LName Of the New Footballer " << endl;
	cin >> LName;
	cout << "Enter The New Footballer id" << endl;
	cin >> id;
	cout << "Enter The Position of the footballer" << endl;
	cin >> Position;
	return (*this);
}
Footballer& Footballer::setTeamName(const string &x)
{
	this->TeamName = x;
	return (*this);
}

int Footballer::getid(const Footballer *x)
{
	return (*x).id;
}

void Footballer::addGoal()
{
	NumOfScores++;
}


