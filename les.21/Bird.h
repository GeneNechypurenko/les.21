#pragma once
#include "Animal.h"

class Bird: public Animal
{
public:
	Bird(const string type);

	virtual void eat() = 0;
	virtual void sleep() = 0;
	virtual void move() = 0;
	virtual void info() = 0;

	void layingEggs();
};

