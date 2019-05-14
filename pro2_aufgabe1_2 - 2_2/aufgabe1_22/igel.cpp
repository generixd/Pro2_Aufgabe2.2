#include "igel.h"


Igel::Igel()
{
	position = 0;
	salat = 1;
}

bool Igel::ziehe(int felder)
{
	if (salat == 1)
	{
		salat_left = 10;
		salat = 0;
	}
	if (salat_left > felder)
	{
		position = position + felder;
		salat_left = salat_left - felder;
		if (salat_left == 0)
		{
			salat = 1;
		}
	}
	else
	{
		salat = 1;
	}
	return true; //?
}


int Igel::getSalat()
{
	if (salat_left > 0)
		return 1;
	return salat;
}

int Igel::getVorrat()
{
	return salat_left;
}