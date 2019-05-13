#pragma once
#include "Pizza.h"
#include <iostream>
class Carnivora : public Pizza
{
public:
	Carnivora();
	friend std::istream& operator >>(std::istream &in, Carnivora &);
	Carnivora operator = (const Carnivora&);
	void display();
	void preparare(int);
};

