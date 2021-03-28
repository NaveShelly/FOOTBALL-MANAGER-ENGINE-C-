#include "Stadium.h"
#include <string>
Stadium::Stadium()
{
	StadiumName = '0';
	City = '0';
	NumofSeats = 0;
}
Stadium::~Stadium()
{
	delete this;
}
Stadium::Stadium(const Stadium & x)
{
	this->operator=(x);
}

Stadium & Stadium::operator=(const Stadium & x)
{
	this->StadiumName = x.StadiumName;
	this->City = x.City;
	this->NumofSeats = x.NumofSeats;
	return (*this);
}
Stadium& Stadium::operator<<(const Stadium & x)
{
	cout << "The Name of The Stadium Is :" << endl;
	cout << StadiumName;
	cout << endl;
	cout << "The Name of The City is :" << endl;
	cout << City;
	cout << endl;
	return (*this);
}

Stadium & Stadium::setStadium(const string x, const string y, const int z)
{
	StadiumName = x;
	City = y;
	NumofSeats = z;
	return (*this);
}
