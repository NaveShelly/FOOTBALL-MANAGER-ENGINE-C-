#ifndef STADIUM_H
#define STADIUM_H
#include<iostream>
using namespace std;
class Stadium
{
private:
	string StadiumName;
	string City;
	int NumofSeats;
public:
	Stadium();
	~Stadium();
	Stadium(const Stadium &x);
	Stadium& operator=(const Stadium &x);
	Stadium& operator<<(const Stadium &x);
	Stadium& setStadium(const string x,const string y,const int z);
};
#endif // !STADIUM_H
