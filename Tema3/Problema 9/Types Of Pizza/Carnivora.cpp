#include "pch.h"
#include "Carnivora.h"

Carnivora::Carnivora()
{
	setVegetarian(0);
	ingr.sos_bbq = 0, ingr.sos_samurai = 0;
	ingr.parmezan = 0;   ingr.cheddar = 0;
	ingr.sunca = 0;  ingr.chorizo = 0; ingr.pui = 0; ingr.ton = 0;
	ingr.rosii = 0; ingr.masline = 0; ingr.ceapa = 0; ingr.jalapeno = 0; ingr.ardei = 0; ingr.ciuperci = 0; ingr.porumb = 0;
}

void Carnivora::display()
{
	std::cout << "Pizza Carnivora!";
}

Carnivora Carnivora::operator =(const Carnivora &obj)
{
	size = obj.size;
	return obj;
}

std::istream& operator >>(std::istream &in, Carnivora &obj)
{
	std::cout << "\nCe dimensiune doriti sa aiba pizza? 1. Mica | 2. Medie | 3. Mare\n";
	in >> obj.size;

	return in;
}

void Carnivora::preparare(int x)
{
	size = x;
	if (x == 1) //mica
	{
		ingr.sos_rosii = 5;
		ingr.mozzarella = 5;
		ingr.pepperoni = 17;
		ingr.vita = 15;
		ingr.carnati = 15;
		ingr.bacon = 15;
	}

	if (x == 2) //medie
	{
		ingr.sos_rosii = 5;
		ingr.mozzarella = 5;
		ingr.pepperoni = 20;
		ingr.vita = 20;
		ingr.carnati = 15;
		ingr.bacon = 15;
	}

	if (x == 3) //mare
	{
		ingr.sos_rosii = 5;
		ingr.mozzarella = 5;
		ingr.pepperoni = 25;
		ingr.vita = 20;
		ingr.carnati = 15;
		ingr.bacon = 20;
	}

}
