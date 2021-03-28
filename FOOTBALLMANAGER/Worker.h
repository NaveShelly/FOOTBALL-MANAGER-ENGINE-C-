#ifndef WORKER_H
#define WORKER_H
#include"person.h"
class Worker :virtual protected Person
{
protected:
	int CarrerTime;
public:
	Worker();
	~Worker();
	Worker(const Worker& x);
	Worker operator<<(const Worker &x);
	Worker& operator=(const Worker &x);
	int GetCarrierTime() { return CarrerTime; };
};
#endif // !WORKER_H
