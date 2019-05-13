#pragma once
#include "Pizza.h"
#include <iostream>

class Diavola : public Pizza
{
public:
	Diavola();
	friend std::istream& operator >>(std::istream &in, Diavola &);
	Diavola operator = (const Diavola&);
	void display();
	void preparare(int);
};

