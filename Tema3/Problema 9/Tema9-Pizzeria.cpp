#include "pch.h"
#include <iostream>
#include "Pizza.h"
#include "Diavola.h"
#include "Carnivora.h"
#include "AmericanSpicy.h"
#include "Rodeo.h"
#include "Pomodoro.h"

template <class T> 
class Meniu
{
public:

	int index;
	float pret;
	Pizza * comanda = new T[100];

	Meniu()
	{
		index = 0;
		pret = 0;
	}


	Meniu& operator+=(int i)
	{
		index = index + i;
		return *this;
	}

	float calcul(int marime)
	{
		T* obj = dynamic_cast<T*>(&comanda[index]);
		obj->preparare(marime);
		return obj->PriceCalculator();
	}
};


int main()
{
	Meniu <Rodeo> meniuRodeo;
	Meniu <Diavola> meniuDiavola;
	Meniu <Pomodoro> meniuPomodoro;
	Meniu <Carnivora> meniuCarnivora;
	Meniu <AmericanSpicy> meniuSpicy;
	

	int optiune, optiuneOrder, optiunePizza, nrOfPizza, size, choice;
	float distanta;

	std::cout << "--------------------------------------Bine ati venit la Pizza Restantierilor!--------------------------------------\n\n";
pickAgain:

	std::cout << "Doriti sa comandati? 1. Da | 2. Nu\n";
	std::cin >> optiune;
	if (optiune < 1 || optiune>2)
	{
		std::cout << "Optiune invalida! ";
		goto pickAgain;
	}
	std::cout << "\n";

do
{
	switch (optiune)
	{
	case 1:
	{
	pickAgainOrder:
		std::cout << "Doriti sa comandati online? 1. Da 2. Nu\n";
		std::cin >> optiuneOrder;
		if (optiuneOrder < 1 || optiuneOrder>2)
		{
			std::cout << "Optiune invalida! ";
			goto pickAgainOrder;
		}
		std::cout << '\n';



		if (optiuneOrder == 1)
		{
			std::cout << "Introduceti distanta fata de Pizzeria Restantierilor in km\n";
			std::cin >> distanta;
			if (distanta < 10)
				distanta = 10;
			std::cout << "\n";
			std::cout << "Cate pizza doriti sa comandati?  ";
			std::cin >> nrOfPizza;
			for (int i = 1; i <=nrOfPizza; i++)
			{
			pickAgainPizzaAway:
				std::cout << "\nMeniul nostru este: 1. Pizza American Spicy | 2. Pizza Carnivora | 3. Pizza Diavola | 4. Pizza Pomodoro (vegetariana) | 5.  Pizza Rodeo\n";
				std::cin >> optiunePizza;
				if (optiunePizza < 1 || optiunePizza>5)
				{
					std::cout << "Optiune invalida! ";
					goto pickAgainPizzaAway;
				}
				std::cout << "\n\n";

				switch (optiunePizza)
				{
				case 1:
				{
					std::cout << "Marime: 1. Mica | 2. Medie | 3. Mare\n";
					std::cin >> size;
					while (size < 1 || size>3)
					{
						std::cout << "Optiune invalida! Va rugam sa incercati din nou! \n";
						std::cin >> size; std::cout << "\n";

					}
					float price = meniuSpicy.calcul(size);
					price += (0.05*(distanta / 10))*price;
					meniuSpicy.pret += price;
					meniuSpicy += 1;

					break;
				}
				case 2:
				{
					std::cout << "Marime: 1. Mica | 2. Medie | 3. Mare\n";
					std::cin >> size;
					while (size < 1 || size>3)
					{
						std::cout << "Optiune invalida! Va rugam sa incercati din nou! \n";
						std::cin >> size; std::cout << "\n";

					}
					float price = meniuCarnivora.calcul(size);
					price += (0.05*(distanta / 10))*price;
					meniuCarnivora.pret += price;
					meniuCarnivora += 1;

					break;
				}
				case 3:
				{
					std::cout << "Marime: 1. Mica | 2. Medie | 3. Mare\n";
					std::cin >> size;
					while (size < 1 || size>3)
					{
						std::cout << "Optiune invalida! Va rugam sa incercati din nou! \n";
						std::cin >> size; std::cout << "\n";;

					}
					float price = meniuDiavola.calcul(size);
					price += (0.05*(distanta / 10))*price;
					meniuDiavola.pret += price;
					meniuDiavola += 1;

					break;
				}
				case 4:
				{
					std::cout << "Marime: 1. Mica | 2. Medie | 3. Mare\n";
					std::cin >> size;
					while (size < 1 || size>3)
					{
						std::cout << "Optiune invalida! Va rugam sa incercati din nou! \n";
						std::cin >> size; std::cout << "\n";

					}
					float price = meniuPomodoro.calcul(size);
					price += (0.05*(distanta / 10))*price;
					meniuPomodoro.pret += price;
					meniuPomodoro += 1;

					break;
				}
				case 5:
				{
					std::cout << "Marime: 1. Mica | 2. Medie | 3. Mare\n";
					std::cin >> size;
					while (size < 1 || size>3)
					{
						std::cout << "Optiune invalida! Va rugam sa incercati din nou! \n";
						std::cin >> size; std::cout << "\n";

					}
					float price = meniuRodeo.calcul(size);
					price += (0.05*(distanta / 10))*price;
					meniuRodeo.pret += price;
					meniuRodeo += 1;

					break;
				}
				default:
					std::cout << "\nOptiune invalida!";
		
				}
			}
		}


		if (optiuneOrder == 2)
		{
			std::cout << "Cate pizza doriti sa comandati?  ";
			std::cin >> nrOfPizza;
			for (int i = 1; i <= nrOfPizza; i++)
			{
			pickAgainPizza:
				std::cout << "\nMeniul nostru este: 1. Pizza American Spicy | 2. Pizza Carnivora | 3. Pizza Diavola | 4. Pizza Pomodoro (vegetariană) | 5.  Pizza Rodeo\n";
				std::cin >> optiunePizza;
				if (optiunePizza < 1 || optiunePizza>5)
				{
					std::cout << "Optiune invalida! ";
					goto pickAgainPizza;
				}
				std::cout << "\n\n";

				switch (optiunePizza)
				{
				case 1:
				{
					std::cout << "Marime: 1. Mica | 2. Medie | 3. Mare\n";
					std::cin >> size;
					while (size < 1 || size>3)
					{
						std::cout << "Optiune invalida! Va rugam sa incercati din nou! \n";
						std::cin >> size; std::cout << "\n";

					}
					meniuSpicy.pret += meniuSpicy.calcul(size);
					meniuSpicy += 1;

					break;
				}
				case 2:
				{
					std::cout << "Marime: 1. Mica | 2. Medie | 3. Mare\n";
					std::cin >> size;
					while (size < 1 || size>3)
					{
						std::cout << "Optiune invalida! Va rugam sa incercati din nou! \n";
						std::cin >> size; std::cout << "\n";

					}
					meniuCarnivora.pret += meniuCarnivora.calcul(size);
					meniuCarnivora += 1;

					break;
				}
				case 3:
				{

					std::cout << "Marime: 1. Mica | 2. Medie | 3. Mare\n";
					std::cin >> size;
					while (size < 1 || size>3)
					{
						std::cout << "Optiune invalida! Va rugam sa incercati din nou! \n";
						std::cin >> size; std::cout << "\n";

					}
					meniuDiavola.pret += meniuDiavola.calcul(size);
					meniuDiavola += 1;

					break;
				}
				case 4:
				{
					std::cout << "Marime: 1. Mica | 2. Medie | 3. Mare\n";
					std::cin >> size;
					while (size < 1 || size>3)
					{
						std::cout << "Optiune invalida! Va rugam sa incercati din nou! \n";
						std::cin >> size; std::cout << "\n";

					}
					meniuPomodoro.pret += meniuPomodoro.calcul(size);
					meniuPomodoro += 1;

					break;
				}
				case 5:
				{
					std::cout << "Marime: 1. Mica | 2. Medie | 3. Mare\n";
					std::cin >> size;
					while (size < 1 || size>3)
					{
						std::cout << "Optiune invalida! Va rugam sa incercati din nou! \n";
						std::cin >> size; std::cout << "\n";

					}
					meniuRodeo.pret += meniuRodeo.calcul(size);
					meniuRodeo += 1;

					break;
				}
				default:
					std::cout << "\nOptiune invalida!";
				}
			}
		}
		std::cout << "\nMai doriti sa comandati si altceva? 1. Da | 2. Nu\n";
		std::cin >> choice;
		if (choice == 2) optiune = 0;
		std::cout << "\n\n";
		break;
	}

	case 2:
		std::cout << "O zi minunata!\n\n-----------------------------------------------------------------------------------\n\n";
		break;

	default:
		std::cout << "Multumim ca ati comandat de la noi!\n\n-----------------------------------------------------------------------------------\n\n";
		break;
	}
} while (optiune==1);



float pret_normal = meniuSpicy.pret + meniuCarnivora.pret + meniuDiavola.pret + meniuRodeo.pret;
float pret_veg = meniuPomodoro.pret;

std::cout << "Dupa aceasta rulare au fost vandute : \n\t" 
	   	  << meniuSpicy.index << " pizza American Spicy\t - " << meniuSpicy.pret <<" lei\n\t"
		  << meniuCarnivora.index << " pizza Carnivora\t - " << meniuCarnivora.pret <<" lei\n\t"
		  << meniuDiavola.index << " pizza Diavola    \t - " << meniuDiavola.pret <<" lei\n\t"
		  << meniuPomodoro.index << " pizza Pomodoro\t - " << meniuPomodoro.pret <<" lei\n\t"
		  << meniuRodeo.index << " pizza Rodeo       \t - " << meniuRodeo.pret <<" lei\n";

std::cout << "Din vanzarea pizzei normale s-au strans " << pret_normal << " lei\n";
std::cout << "Din vanzarea pizzei vegetariene s-au strans " << pret_veg << " lei\n";
std::cout << "In total s-au strans " << pret_normal + pret_veg << " lei\n\n";

return 0;
}


