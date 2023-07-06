#pragma once
#include "Bird.h"
#include "IFly.h"

class Raven: public Bird, public IFly
{
	Raven(const string type);

	void eat()override;
	void sleep()override;
	void move()override;
	void info()override;

	void fly()override;
};

