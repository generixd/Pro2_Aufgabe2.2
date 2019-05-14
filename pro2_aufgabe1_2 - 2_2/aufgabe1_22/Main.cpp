#include "spiel.h"
#include <Windows.h>

int main()
{
	char a;
	Spiel spiel;
	std::cout << "mache zug = 1" << std::endl;
	std::cout << "gib ziel = 2" << std::endl;

	while (true)
	{
		std::cin >> a;
		if (a == '1')
			spiel.macheZug();
		if (a == '2')
			std::cout << "ziel ist bei: " << spiel.getZiel() << std::endl;
		spiel.getStand();
	}
	
	std::cin >> a;
}