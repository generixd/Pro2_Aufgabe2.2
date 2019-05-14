#pragma once
#include "spielfigur.h"


class Hase : public spielfigur
{
public:
	Hase(); //fertig
	bool ziehe(int felder); //fertig
	int getKarotten();//fertig
	int getVorrat(); //unklar
private:
	int karotte;
	int fehlversuche;
};
