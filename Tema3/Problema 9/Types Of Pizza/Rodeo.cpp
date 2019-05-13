#include "pch.h"
#include "Rodeo.h"

Rodeo::Rodeo()
{
	setVegetarian(0);
	ingr.sos_rosii = 0 ,ingr.sos_samurai=0;
	ingr.parmezan = 0;   ingr.cheddar = 0;
	ingr.chorizo = 0; ingr.pui = 0; ingr.ton = 0; ingr.carnati = 0; ingr.bacon = 0; ingr.pepperoni = 0; ingr.vita = 0;
	ingr.rosii = 0; ingr.jalapeno = 0; ingr.ardei = 0; 
}

void Rodeo::display()
{
	std::cout << "Pizza Rodeo!";
}

Rodeo Rodeo::operator =(const Rodeo &obj)
{
	size = obj.size;
	return obj;
}

std::istream& operator >>(std::istream &in, Rodeo &obj)
{
	std::cout << "\nCe dimensiune doriti sa aiba pizza? 1. Mica | 2. Medie | 3. Mare\n";
	in >> obj.size;

	return in;
}

void Rodeo::preparare(int x)
{
	size = x;
	if (x == 1) //mica
	{
		ingr.sos_bbq = 10;
		ingr.mozzarella = 10;
		ingr.masline = 5;
		ingr.carnati = 15;
		ingr.sunca = 15;
		ingr.ceapa = 7;
		ingr.porumb = 10 ;
		ingr.ciuperci = 10;

	}

	if (x == 2) //medie
	{
		ingr.sos_bbq = 10;
		ingr.mozzarella = 10;
		ingr.masline = 5;
		ingr.carnati = 20;
		ingr.sunca = 20;
		ingr.ceapa = 7;
		ingr.porumb = 10;
		ingr.ciuperci = 10;
	}

	if (x == 3) //mare
	{
		ingr.sos_bbq = 10;
		ingr.mozzarella = 10;
		ingr.masline = 10;
		ingr.carnati = 20;
		ingr.sunca = 25;
		ingr.ceapa = 5;
		ingr.porumb = 10;
		ingr.ciuperci = 10;
	}

}
