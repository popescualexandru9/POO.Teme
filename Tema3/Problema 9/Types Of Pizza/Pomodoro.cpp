#include "pch.h"
#include "Pomodoro.h"

Pomodoro::Pomodoro()
{
	setVegetarian(1);
	ingr.sos_rosii = 0 , ingr.sos_samurai = 0;
	ingr.mozzarella = 0;
	ingr.sunca = 0; ingr.vita = 0; ingr.pepperoni = 0; ingr.bacon = 0; ingr.chorizo = 0; ingr.pui = 0; ingr.ton = 0; ingr.carnati = 0;
	ingr.jalapeno = 0; ingr.ardei = 0; ingr.ciuperci = 0;
}

void Pomodoro::display()
{
	std::cout << "Pizza Pomodoro!";
}

Pomodoro Pomodoro::operator =(const Pomodoro &obj)
{
	size=obj.size;
	return obj;
}

std::istream& operator >>(std::istream &in, Pomodoro &obj)
{
	std::cout << "\nCe dimensiune doriti sa aiba pizza? 1. Mica | 2. Medie | 3. Mare\n";
	in >> obj.size;

	return in;
}

void Pomodoro::preparare(int x)
{
	size=x;
	if (x == 1) //mica
	{
		ingr.sos_bbq = 10;
		ingr.cheddar = 10;
		ingr.parmezan = 10;
		ingr.rosii = 15;
		ingr.masline = 10;
		ingr.ciuperci = 10;
		ingr.ceapa = 10;
		ingr.porumb = 10;

	}

	if (x == 2) //medie
	{
		ingr.sos_bbq = 10;
		ingr.cheddar = 15;
		ingr.parmezan = 10;
		ingr.rosii = 15;
		ingr.masline = 15;
		ingr.ciuperci = 10;
		ingr.ceapa = 10;
		ingr.porumb = 10;
	}

	if (x == 3) //mare
	{
		ingr.sos_bbq = 10;
		ingr.cheddar = 15;
		ingr.parmezan = 10;
		ingr.rosii = 15;
		ingr.masline = 15;
		ingr.ciuperci = 10;
		ingr.ceapa = 10;
		ingr.porumb = 15;
	}

}
