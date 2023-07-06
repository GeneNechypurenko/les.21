#include "Bat.h"

Bat::Bat(const string type)
	:
	Mamal(type)
{}

void Bat::eat()
{
	cout << "Bats are omnivorous creatures" << endl;
}

void Bat::sleep()
{
	cout << "Bats sleeping for 16 hours a day" << endl;
}

void Bat::move()
{
	cout << "Bats are very clumsy on their thow little paws" << endl;
}

void Bat::fly()
{
	cout << "Bats are good fliers" << endl;
}

void Bat::info()
{
	cout << "Animal " << type << endl;
	eat();
	sleep();
	move();
	fly();
	feedOffspring();
}

