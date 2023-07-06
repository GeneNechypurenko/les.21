#include <iostream>

#include "Animal.h"
#include "Bat.h"
#include "Bird.h"
#include "Cow.h"
#include "IFly.h"
#include "Mamal.h"
#include "Raven.h"

using namespace std;

int main()
{
	Mamal* mam = nullptr;
	Bird* bird = nullptr;
	Bat bat("bat");
	Cow cow("cow");
	//Raven rav("raven");

	mam = &bat;
	mam->info();

	cout << endl;

	mam = &cow;
	mam->info();

	cout << endl;

	//bird = &rav;
	//bird.info();

	return 0;
}