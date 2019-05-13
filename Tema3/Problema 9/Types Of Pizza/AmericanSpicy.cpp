#include "pch.h"
#include "AmericanSpicy.h"

AmericanSpicy::AmericanSpicy()
{
	setVegetarian(0);
	ingr.sos_bbq = 0;
	ingr.parmezan = 0;   ingr.cheddar = 0;
	ingr.chorizo = 0; ingr.pui = 0; ingr.ton = 0; ingr.carnati = 0; ingr.bacon = 0; ingr.sunca = 0; ingr.vita = 0;
	ingr.porumb = 0; ingr.ciuperci = 0; ingr.masline = 0;
}

void AmericanSpicy::display()
{
	std::cout << "Pizza American Spicy!";
}

AmericanSpicy AmericanSpicy::operator =(const AmericanSpicy &obj)
{
	size = obj.size;
	return obj;
}

std::istream& operator >>(std::istream &in, AmericanSpicy &obj)
{
	std::cout << "\nCe dimensiune doriti sa aiba pizza? 1. Mica | 2. Medie | 3. Mare\n";
	in >> obj.size;

	return in;
}

void AmericanSpicy::preparare(int x)
{
	size = x;
	if (x == 1) //mica
	{
		ingr.sos_rosii = 10;
		ingr.sos_samurai = 10;
		ingr.mozzarella = 10;
		ingr.pepperoni = 20;
		ingr.ceapa = 5;
		ingr.rosii = 10;
		ingr.jalapeno = 15;
		ingr.ardei = 10;
	}

	if (x == 2) //medie
	{
		ingr.sos_rosii = 10;
		ingr.sos_samurai = 10;
		ingr.mozzarella = 10;
		ingr.pepperoni = 25;
		ingr.ceapa = 10;
		ingr.rosii = 10;
		ingr.jalapeno = 10;
		ingr.ardei = 10;
	}

	if (x == 3) //mare
	{
		ingr.sos_rosii = 10;
		ingr.sos_samurai = 15;
		ingr.mozzarella = 10;
		ingr.pepperoni = 30;
		ingr.ceapa = 10;
		ingr.rosii = 13;
		ingr.jalapeno = 10;
		ingr.ardei = 10;
	}

}
