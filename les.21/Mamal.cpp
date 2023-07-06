#include "Mamal.h"

Mamal::Mamal(const string type)
	:
	Animal(type)
{}

void Mamal::feedOffspring()
{
	cout << "All mamals feeding their offspring with milk" << endl;
}
