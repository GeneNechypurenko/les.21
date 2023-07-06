#include "Raven.h"

Raven::Raven(const string type)
	:
	Bird(type)
{}

void Raven::eat()
{
	cout << "Ravens are omnivorous birds" << endl;
}

void Raven::sleep()
{
	cout << "Ravens sleeping 6 hours a day" << endl;
}

void Raven::move()
{
	cout << "Ravvens are dexterous birds that can jump or walk on their two legs" << endl;
}

void Raven::fly()
{
	cout << "Ravens can fly" << endl;
}

void Raven::info()
{
	cout << "Animal " << type << endl;
	eat();
	sleep();
	move();
	fly();
	layingEggs();
}


