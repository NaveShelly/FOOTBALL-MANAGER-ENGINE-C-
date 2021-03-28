#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
	string FName;
	string LName;
	int id;
public:
	Person();
	virtual ~Person()=0;
	Person(const Person&x);
	//bool Pots(const Person &x);//player of the season//need to do the function
	int getid() { return id; };
};
#endif // !PERSON_H
