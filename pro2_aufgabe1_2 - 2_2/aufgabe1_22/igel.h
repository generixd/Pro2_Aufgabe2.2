#pragma once
#include "spielfigur.h"

class Igel: public spielfigur
{
public:
	Igel(); //fertig
	bool ziehe(int felder); //fertig
	int getSalat(); //fertig
	int getVorrat(); //fertig
private:
	int salat;
	int salat_left; //nicht angegeben aber gebraucht
};
