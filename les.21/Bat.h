#pragma once
#include "Mamal.h"
#include "IFly.h"

class Bat:public Mamal, public IFly
{
public:
	Bat(const string type);

	void eat()override;
	void sleep()override;
	void move()override;
	void info()override;

	void fly()override;
};

