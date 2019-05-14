#include "hase.h"


Hase::Hase()
{
	position = 0;
	karotte = 31;
}

bool Hase::ziehe(int felder)
{
	int kosten = 0;
	char a;
	std::cout << "Hase hat karotten: " << karotte << std::endl;
	std::cout << "vor = 1, zurueck = 2" << std::endl;
	std::cin >> a;
	if (a == '1')
	{
		for (int i = 0; i <= felder; i++)
		{
			kosten = kosten + i;
		}
		if (kosten <= karotte)
		{
			position = position + felder;
			karotte = karotte - kosten;
		}
		else
		{
			std::cout << "nicht genug karotten" << std::endl;
			return false;
		}
		return true;
	}
	if (a == '2')
	{
		position = position - felder;
		karotte = karotte + (10 * felder);
		std::cout << "momentane karotten: " << karotte << std::endl;
		return true;
	}
	return false;
}



int Hase::getKarotten()
{
	return karotte;

}

int Hase::getVorrat()
{
	return 1; //?
}