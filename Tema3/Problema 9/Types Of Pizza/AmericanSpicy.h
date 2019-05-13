#pragma once
#include "Pizza.h"
#include <iostream>

class AmericanSpicy :public Pizza
{
public:
	AmericanSpicy();
	friend std::istream& operator >>(std::istream &in, AmericanSpicy &);
	AmericanSpicy operator = (const AmericanSpicy&);
	void display();
	void preparare(int);
};

