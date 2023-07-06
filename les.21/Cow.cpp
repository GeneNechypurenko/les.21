#include "Cow.h"

Cow::Cow(const string type)
	:
	Mamal(type)
{}

void Cow::eat()
{
	cout << "Cows are herbivorous animals" << endl;
}

void Cow::sleep()
{
	cout << "Cows sleeping 8 hours a day" << endl;
}

void Cow::move()
{
	cout << "Cows moving on their two legs" << endl;
}

void Cow::info()
{
	cout << "Animal " << type << endl;
	eat();
	sleep();
	move();
	feedOffspring();
}
