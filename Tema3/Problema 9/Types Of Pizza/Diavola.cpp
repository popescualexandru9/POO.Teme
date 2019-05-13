#include "pch.h"
#include "Diavola.h"


Diavola::Diavola()
{
	setVegetarian(0);
	ingr.sos_bbq = 0 , ingr.sos_samurai = 0;
	ingr.parmezan = 0;   ingr.cheddar = 0;
	ingr.sunca = 0; ingr.vita = 0;  ingr.bacon = 0;  ingr.pui = 0; ingr.ton = 0; ingr.carnati = 0;
	ingr.masline = 0; ingr.ardei = 0; ingr.ciuperci = 0; ingr.porumb = 0;
}

void Diavola::display()
{
	std::cout << "Pizza Diavola!";
}

Diavola Diavola::operator =(const Diavola &obj)
{
	size = obj.size;
	return obj;
}

std::istream& operator >>(std::istream &in,Diavola &obj)
{
	std::cout << "\nCe dimensiune doriti sa aiba pizza? 1. Mica | 2. Medie | 3. Mare\n";
	in >> obj.size;

	return in;
}

void Diavola::preparare(int x)
{
	size = x;
	if (x == 1) //mica
	{
		ingr.sos_rosii = 10;
		ingr.mozzarella = 8;
		ingr.pepperoni = 20;
		ingr.rosii = 5;
		ingr.chorizo = 10;
		ingr.jalapeno = 10;
		ingr.ceapa = 10;
	}

	if (x == 2) //medie
	{
		ingr.sos_rosii = 10;
		ingr.mozzarella =8;
		ingr.pepperoni = 25;
		ingr.rosii = 5;
		ingr.chorizo = 15;
		ingr.jalapeno = 10;
		ingr.ceapa = 10;
	}

	if (x == 3) //mare
	{
		ingr.sos_rosii = 10;
		ingr.mozzarella = 5;
		ingr.pepperoni = 30;
		ingr.rosii = 5;
		ingr.chorizo = 20;
		ingr.jalapeno = 10;
		ingr.ceapa = 10;
	}

}
