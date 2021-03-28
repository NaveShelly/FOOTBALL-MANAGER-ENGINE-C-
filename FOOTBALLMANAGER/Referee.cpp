#include "Referee.h"
int Referee::MaximumMistakes = 0;
Referee::Referee()
{
	NumOfGames = 0;
	NumOfMistakes = 0;
}
Referee::~Referee()
{
	delete this;
}
Referee::Referee(const Referee&x)
{
	this->operator=(x);
}
Referee& Referee::operator=(const Referee &x)
{
	this->NumOfGames = x.NumOfGames;
	this->NumOfMistakes = x.NumOfMistakes;
	return (*this);
}
float Referee::SeasonSalary()
{
	if (this->NumOfMistakes == MaximumMistakes)
		return BaseSalaryReferee + 30 * NumOfGames - 500;
	else
		return BaseSalaryReferee + 30 * NumOfGames;
}
bool Referee::RefereeOfTheSeason()
{
	if ((NumOfMistakes) <= (MaximumMistakes / 2))
		return 1;
	else return 0;
}
void Referee::NewMistakes(const int x)
{
	NumOfMistakes = NumOfMistakes + x;
}
Referee& Referee::operator<<(const Referee& x)
{
	cout << "The First Name of The Referee is :" << endl;
	cout << FName<<endl;
	cout << "The Last Name of The Referee is :" << endl;
	cout << LName<<endl;
	cout << "The id of the Referee is:" << endl;
	cout << id<<endl;
	cout << "The Num of the games of the Referee are:" << endl;
	cout << NumOfGames << endl;
	cout << "The Num Of the Mistakes of the Referee are:" << endl;
	cout << NumOfMistakes << endl;
	cout << "The Salary of the Referee are:" << endl;
	cout << SeasonSalary() << endl;
	return (*this);
}
void Referee::NewGames()
{
	NumOfGames++;
}
Referee& Referee::setReferee(const string x, const string w, const int z, const int y, const int t, const int u)
{
	this->FName = x;
	this->LName = w;
	this->CarrerTime = z;
	this->id = y;
	this->NumOfGames = t;
	this->NumOfMistakes = u;
	return (*this);
}