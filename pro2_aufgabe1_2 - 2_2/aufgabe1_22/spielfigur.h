#pragma once
#include <iostream>

class spielfigur
{
public:
	int getPosition();
	virtual bool ziehe(int felder)=0;

protected:
	int position;
};


