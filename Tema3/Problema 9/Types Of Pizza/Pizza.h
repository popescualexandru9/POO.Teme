#pragma once
#include "Price.h"
#include "Ingrediente.h"
class Pizza : public Price
{
private:
	const int manopera = 2;
	int vegetarian;
	
protected:
	Ingrediente ingr;
	int size;

public:

	Pizza();
	int PriceCalculator();
	void setVegetarian(int x) { vegetarian = x; }
	virtual void display();
};

