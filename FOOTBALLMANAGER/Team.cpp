#include "Team.h"
#include <time.h>
Team::Team()
{
	Managers = new Manager[1];
	Coachs = new Coach[1];
	Player = new Footballer*[15];
	TeamName = "0";
	Director = "0";
}

Team::~Team()
{
	cout << "obj Deleted";
}

Team::Team(const Team & x)
{
	this->operator=(x);
}

Team & Team::operator=(const Team *x)
{
	this->Stadiumx = (*x).Stadiumx;
	this->Player = (*x).Player;
	this->Coachs = (*x).Coachs;
	this->Managers = (*x).Managers;
	this->Director = (*x).Director;
	this->TeamName = (*x).TeamName;
	return (*this);
}

Team & Team::AddFootballer(const Team & x)
{
	Footballer tmp;
	cout << "To add Footballer Insert Some Deatils" << endl;
	tmp.addFootballer(tmp);
	Team tmp1;
	tmp1.Player = new Footballer*[15 + 1];
	tmp1.operator=(this);
	tmp.setTeamName(this->TeamName);
	tmp1.Player[15 + 1] = new Footballer[1];
	tmp1.Player[15 + 1]->operator=(tmp);
	return (*this);
}

//Team & Team::AddPlayer(const Team & x)
//{
//}

Team & Team::AddDirector(const Team & x)
{
	int y=3;
	while(y != 0 && y != 1)
	{
		cout << "To Add A Manager Press 1 To exit Press 0" << endl;
		cin >> y;
	}
	if (y == 1)
	{
		Director = 1;
	}
	else
		Director = 0;
	return (*this);
}

Team & Team::operator<<(const Team & x)
{
	cout << "The TeamName is :" << endl;
	for (int i = 0;TeamName[i] != '\0';i++)
	{
		cout << TeamName[i];
	}
	cout << endl;
	Stadiumx->operator<<((*Stadiumx));
	for (int i = 0;i < 15;i++)
	{
//		Player[i].operator<<(Player[i]);
	}
	Coachs->operator<<((*Coachs));
	Managers->operator<<((*Managers));
	if (Director == 1)
	{
		cout << "The Team Had Director" << endl;
	}
	else 
		cout << "The Team Doesnt Had Director" << endl;
	return (*this);
}

void Team::FindFootballer(int tmpid,int i)
{
	int flag = 0;
	if (i == 0)
	{
		for (int j = 0;j < 15;j++)
		{
			if (Player[j]->getid(Player[j]) == tmpid)
			{
				cout << Player[j]->SeasonSalary();
				flag = 1;
			}
		}
		if (flag == 0)
		{
			cout << "id dos'nt match" << endl;
		}
	}
	if (i == 1)
	{
		for (int j = 0;j < 15;j++)
		{
			if (Player[j]->getid(Player[j]) == tmpid)
			{
				Player[j]->addGoal();
				flag = 1;
			}
		}
		if (flag == 0)
		{
			cout << "id dos'nt match" << endl;
		}
	}
}

Team & Team::SetTeam()
{
	string t[5] = { "Beer Sheva","Tel Aviv","Haifa","Eilat","Jerusalem"};
	string s;
	srand(time(NULL));
	TeamName = s = 'a' + rand() % 26;
		Coachs->setCoach(s='a'+ rand() % 9,s = 'a' +rand() % 9,rand() % 9,rand() % 89999 + 10000,rand() % 9,rand() % 9,rand() % 9);
		for (int j = 0;j < 15;j++)
		{
			Player[j] = new Footballer[1];
			Player[j]->setFootballer(s = 'a' + rand() % 26, s = 'a' + rand() % 26,rand() % 9,rand() % 89999 + 10000,rand() % 9,rand() % 9,rand() % 9);
		}
		Managers->setManager(s = 'a' + rand() % 26, s = 'a' + rand() % 26, rand() % 89999 + 10000, rand() % 9);
		Stadiumx = new Stadium[1];
		Stadiumx->setStadium(t[rand() % 5], t[rand() % 5], rand() % 89999 + 10000);
	return (*this);
}
//Team & Team::AddCoach(const Team & x)
//{
//	// TODO: insert return statement here
//}
