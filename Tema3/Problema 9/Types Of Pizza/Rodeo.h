#pragma once
#include "Pizza.h"
#include <iostream>
class Rodeo : public Pizza
{
public:
	Rodeo();
	friend std::istream& operator >>(std::istream &in, Rodeo &);
	Rodeo operator = (const Rodeo&);
	void display();
	void preparare(int);
};

