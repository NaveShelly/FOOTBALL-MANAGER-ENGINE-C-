#include "Leauge.h"
#include <time.h>
#include <typeinfo>
#define TeamNumbers 5
#define RefeereNumbers 4
#define FootballerNumbers 75
#define NumOfGames 40
#define NumofWorkers 85
#define NumofCoachs 5
#define NumOfManagers 5
League& League::MakeRTTI()
{
	Footballer *tmp;
	int v = 0;
	for (int i = 0;i < TeamNumbers;i++)//Footballers
	{
		for (int j = 0;j < 15;j++)
		{
		tmp = Teams[i]->Player[j];
		Workers[v] = new Worker[1];
		Workers[v] = new Footballer(*tmp);
		v++;
		}
	}
	Referee **tmp1;
	tmp1 = new Referee*[RefeereNumbers];
	for (int i = 0;i < TeamNumbers;i++)//Referees
	{
			tmp1[i]=Referees[i];
			Workers[v] = new Worker[1];
			Workers[v] = new Referee(**tmp1);
			v++;
	}
	Coach *tmp2;
	for (int i = 0;i < NumofCoachs;i++)
	{
		tmp2=Teams[i]->Coachs;
		Workers[v] = new Coach(*tmp2);
		v++;
	}
	Manager * tmp3;
	for (int i = 0;i < NumOfManagers;i++)
	{
		tmp3 = Teams[i]->Managers;
		Workers[v] = new Manager(*tmp3);
		v++;
	}
	//Checks if rtti Works 
		int c = 0;
		for (int i = 0;i < NumOfWorkers;i++)
		{
			Footballer *tmp6 = dynamic_cast<Footballer*>((Workers)[i]);
			if (tmp6)
			{
				c++;
			}
		}
		cout << "The Numbers of FootBallers are :"<<c << endl;
		c = 0;
		for (int i = 0;i < NumOfWorkers;i++)
		{
			Manager *tmp6 = dynamic_cast<Manager*>((Workers)[i]);
			if (tmp6)
			{
				c++;
			}
		}
		cout << "The Numbers of Managers are :" << c << endl;
		c = 0;
		for (int i = 0;i < NumOfWorkers;i++)
		{
			Referee *tmp6 = dynamic_cast<Referee*>((Workers)[i]);
			if (tmp6)
			{
				c++;
			}
		}
		cout << "The Numbers of Referees are :" << c << endl;
		c = 0;
		for (int i = 0;i < NumOfWorkers;i++)
		{
			Coach *tmp6 = dynamic_cast<Coach*>((Workers)[i]);
			if (tmp6)
			{
				c++;
			}
		}
		cout << "The Numbers of Coachs are :" << c << endl;

	return *this;
}
League::League()
{
	srand(time(NULL));
	Teams = new Team*[TeamNumbers];
	Workers = new Worker*[NumofWorkers];
	Games = new Game*[NumOfGames];
	string s;
	for (int i = 0;i < TeamNumbers;i++)
	{
		Teams[i] = new Team[1];
		Teams[i]->operator=(Teams[i]->SetTeam());
	}
	Referees = new Referee*[4];
	for (int i = 0;i < 4;i++)
	{
		Referees[i] = new Referee[1];
		Referees[i]->setReferee(s = 'a' + rand() % 26, s = 'a' + rand() % 26, rand() % 9, rand() % 89999 + 10000, rand() % 9, rand() % 9);
	}
	int v = 0;
	for (int i = 0;i<5;i++)
	{
		int result[2] = { 0,0 };
		for (int j = 0;j < 5;j++)
		{
			if (i != j)
			{
				Team *tmp;
				tmp = new Team[2];
				tmp[0].operator=(Teams[i]);
				tmp[1].operator=(Teams[j]);
				Games[v] = new Game[1];
				while (result[0] == result[1])
				{
					result[0] = rand() % 5;
					result[1] = rand() % 5;
				}
				string nameofwinners;
				if (result[0] > result[1])
				{
					nameofwinners = tmp[0].TeamName;
				}
				else
				{
					nameofwinners = tmp[1].TeamName;
				}
				Games[v]->setGames(tmp, result, nameofwinners, result, Referees[rand() % 3]);
				v++;
			}
		}
	}
	for (int i = 4;i >= 0;i--)
	{
		int result[2] = { 0,0 };
		for (int j = 4;j >= 0;j--)
		{
			if (i != j)
			{
				Team *tmp;
				tmp = new Team[2];
				tmp[0].operator=(Teams[i]);
				tmp[1].operator=(Teams[j]);
				Games[v] = new Game[1];
				while (result[0] == result[1])
				{
					result[0] = rand() % 5;
					result[1] = rand() % 5;
				}
				string nameofwinners;
				if (result[0] > result[1])
				{
					nameofwinners = tmp[0].TeamName;
				}
				else
				{
					nameofwinners = tmp[1].TeamName;
				}
				Games[v]->setGames(tmp, result, nameofwinners, result, Referees[rand() % 3]);
				v++;
			}
		}
	}
}
League :: ~League()
{
	cout << "League Obj Deleted" << endl;
}

League & League::Menu(const League & x)
{
	int z = 15;
	while (z <= 0|| z >= 13)
	{
		cout << "For Add Footballer Press 1 " << endl;
		cout << "For Add Referee Press 2" << endl;
		cout << "To Print Team Deatils Press 3" << endl;
		cout << "To Print Refferee Details Press 4" << endl;
		cout << "To Print Future Games Details press 5" << endl;
		cout << "To Print Worker Salary press 6" << endl;
		cout << "To Add A goal press 7" << endl;
		cout << "To Add Judegent Error press 8" << endl;
		cout << "To add Print Out Standing Press 9" << endl;
		cout << "Print Table Press 10" << endl;
		cout << "Print Smallest Salary Footballer" << endl;
		cout << "To Check Rtti Works Press 12" << endl;
		cout << "To Exit press 13" << endl;
		cin >> z;
		switch (z)
		{
		case 1 :
		{
			int i;
			cout << "Enter The Team number to Add Footballer " << endl;
			cin >> i;
			Teams[i]->AddFootballer((*Teams)[i]);
			z = 15;
			break;
		}
		case 2:
		{
			/*cout << "Enter Details to add new Referee to the League Stuff" << endl;
			Referee *tmp=new Referee[5];
			for (int i = 0;i < 4;i++)
			{
				tmp[i] = new Referee[1];
				tmp[i].operator=((*Referees)[i]);
			}
			string firstname, lastname;
			int id,NumOfMistakes,NumberOfGames,Time;
			cout << "Enter First Name Of The New Referee" << endl;
			cin >> firstname;
			cout << "Enter last Name Of The New Referee" << endl;
			cin >> lastname;
			cout << "Enter The Carrier Time of the Referee" << endl;
			cin >> Time;
			cout << "Enter The Number Of mistakes of the referee" << endl;
			cin >> NumOfMistakes;
			cout << "Enter The Number of Games of the referee" << endl;
			cin >> NumberOfGames;
			cout << "Enter The Id Of the referee" << endl;
			cin >> id;
			tmp[4] = new Referee[1];
			tmp[4]->setReferee(firstname,lastname,Time,id,NumberOfGames,NumOfMistakes);
			Referees = new Referee*[5];
			for (int i = 0;i < 5;i++)
			{
				Referees[i] = new Referee[1];
				Referees[i]->operator=((*tmp)[i]);
			}
			break;*/
		}
		case 3:
		{
			int i;
			cout << "Enter The Number of the Team to see all the details" << endl;
			cin >> i;
			Teams[i]->operator<<((*Teams)[i]);
			break;
		}
		case 4:
		{
			cout << "Here all The Refeeres Details" << endl;
			for (int i = 0;i< 4;i++)
			{
				Referees[i]->operator<<((*Referees)[i]);
			}
			break;
		}
		case 5:
		{
			//Random Dates//
		}
		case 6:
		{
			cout << "Enter Id to print details if exist" << endl;
			int tmpid;
			cin >> tmpid;
			for (int i = 0;i < 5;i++)
			{
				Teams[i]->FindFootballer(tmpid,0);
			}
				break;
		}
		case 7:
		{
			cout << "Enter Id to add Goal if exist" << endl;
			int tmpid;
			cin >> tmpid;
			for (int i = 0;i < 5;i++)
				for (int i = 0;i < 5;i++)
				{
					Teams[i]->FindFootballer(tmpid, 1);
				}
			break;
		}
		case 8:
		{
			int flag = 0;
			cout << "Enter Id to add Mistakes if Referee exist" << endl;
			int tmpid;
			cin >> tmpid;
			for (int i = 0;i < 4;i++)
			{
				if (Referees[i]->getid() == tmpid)
				{
					Referees[i]->addMistakes();
					flag = 1;
				}
			}
			if (flag == 0)
			{
				cout << "No Such Referee" << endl;
			}
			break;
		}
		case 9:
		{
			Footballer tmp;
			cout << "The Top Players In The League are:" << endl;
			for (int i = 0;i < 5;i++)
			{
				for (int j = 0;j < 15;j++)
				{
					if (Teams[i]->Player[j]->TopPlayer() == 1)
					{
						Teams[i]->Player[j]->operator<<(tmp);
					}
				}
			}
			cout << endl;
			cout << "The Top Referee In The League are:" << endl;
			for (int i = 0;i < 5;i++)
			{
				if (Referees[i]->RefereeOfTheSeason() == 1)
				{
					Referees[i]->operator<<((*Referees)[i]);
				}
			}
			cout << endl;
			break;
		}
		case 10:
		{
			//ALL RANDOMALY NOT Made TABLES SRY BUT NOT HAVE TIME FOR THIS
		}
		case 11:
		{
			int Min=0,Check,v,w;
			for (int i = 0;i < 5;i++)
			{
				for (int j = 0;j < 15;j++)
				{
					if (Teams[i]->Player[j]->SeasonSalary()> Min)
						Min = Teams[i]->Player[j]->SeasonSalary();
				}
			}
			for (int i = 0;i < 5;i++)
			{
				for (int j = 0;j < 15;j++)
				{
					if (Teams[i]->Player[j]->SeasonSalary() < Min)
					{
						Min = Teams[i]->Player[j]->SeasonSalary();
						v = i;
						w = j;
					}
				}
			}
			Footballer tmp;
			Teams[v]->Player[w]->operator<<(tmp);
			break;
		}
		case 12:
		{
			MakeRTTI();
			break;
		}
		case 13:
		{
			exit(1);
			break;
		}
	}
}
	return (*this);
}