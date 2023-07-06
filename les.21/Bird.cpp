#include "Bird.h"

Bird::Bird(const string type)
	:
	Animal(type)
{}

void Bird::layingEggs()
{
	cout << "All birds are laying eggs" << endl;
}