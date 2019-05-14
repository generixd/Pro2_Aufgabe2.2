#include "spiel.h"
#include "igel.h"
#include "hase.h"


int Spiel::getZiel()
{
	return felder;
}

int Spiel::wuerfle()
{
	return rand() % 6 + 1;
}

Spiel::Spiel(int anzFelder)
{
	srand(time(NULL));
	felder = anzFelder;
	Spielfiguren.push_back(new Igel());
	Spielfiguren.push_back(new Hase());
	
}

Spiel::Spiel()
{
	srand(time(NULL));
	felder = 20;
	Spielfiguren.push_back(new Igel);
	Spielfiguren.push_back(new Hase);
}


void Spiel::macheZug()
{
	std::cout << "Igel wuerfelt." << std::endl;
	int wigel = this->wuerfle();
	std::cout << "Igel wuerfelt: " << wigel << std::endl;
	Spielfiguren[0]->ziehe(wigel);

	std::cout << "Hase wuerfelt." << std::endl;
	int whase = this->wuerfle();
	std::cout << "Hase wuerfelt: " << whase << std::endl;
	Spielfiguren[1]->ziehe(whase);
}

bool Spiel::getStand()
{
	if (Spielfiguren[0]->getPosition() >= felder)
	{
		std::cout << "Igel hat gewonnen" << std::endl;
		return true;
	}

	if (Spielfiguren[1]->getPosition() >= felder)
	{
		std::cout << "Hase hat gewonnen" << std::endl;
		return true;
	}

	//std::cout << "hase ist auf position: " << Spielfiguren[0]->getPosition() << std::endl;
	//std::cout << "igel ist auf position: " << Spielfiguren[1]->getPosition() << std::endl;
	int i = 0;
	for (const auto& figur : Spielfiguren) {
		std::cout << "figur " << i << "ist auf position: " << figur->getPosition();
		i++;
	}

	return false;
}
