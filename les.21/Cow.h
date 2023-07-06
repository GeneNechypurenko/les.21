#pragma once
#include "Mamal.h"


class Cow:public Mamal
{
public:
	Cow(const string type);

	void eat()override;
	void sleep()override;
	void move()override;
	void info()override;
};

