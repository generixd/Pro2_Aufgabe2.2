#pragma once
#include <iostream>
#include <stdlib.h>
#include "spielfigur.h"
#include <ctime>
#include <vector>


//fertig
class Spiel
{
	public:
		Spiel(int anzFelder);
		Spiel();
		int getZiel(); //fertig
		int wuerfle(); //fertig
		void macheZug(); //fertig
		bool getStand(); //fertig
	private:
		int ziel;
		int felder;//nicht angegeben aber gebraucht? felder = ziel?
		std::vector <spielfigur*> Spielfiguren;
};


